#include "StartMeasureEvent.h"
#include "CalculationEvent.h"

StartMeasureEvent::StartMeasureEvent() {}
StartMeasureEvent::~StartMeasureEvent() {}

void StartMeasureEvent::handleEvent(){
	tim7Time_ms = 0;
	HAL_TIM_Base_Start_IT(&htim7); 							// stat tim7 | ms counter
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buf, 1); 		// start ADC-DMA
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET); 	// set PB4 high (3.3v)
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc){ // ADC callback
	if(adc_buf[0]>= 4096.0*0.95){ //3892
		t3T = tim7Time_ms;
		HAL_TIM_Base_Stop_IT(&htim7); 							// stop tim7
		HAL_ADC_Stop_DMA(&hadc1); 								// stop ADC-DMA
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);	// set PB4 low
		event_queue.push(new CalculationEvent());				// start calculation
	}
	#ifdef DEBUG
	char msgBuffer[16];
	sprintf(msgBuffer, "Value: %hu : %lu\r\n", adc_buf[0], tim7Time_ms); //%d
	HAL_UART_Transmit(&huart3, (uint8_t*) msgBuffer, strlen(msgBuffer), HAL_MAX_DELAY);
	#endif
}
