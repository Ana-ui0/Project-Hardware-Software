################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/main.c \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c 

CPP_SRCS += \
../Core/Src/CalculationEvent.cpp \
../Core/Src/CancelEvent.cpp \
../Core/Src/DisplayEvent.cpp \
../Core/Src/FinalCalculationResultEvent.cpp \
../Core/Src/LedEvents.cpp \
../Core/Src/OLED_DisplayEvent.cpp \
../Core/Src/SetUpLcd.cpp \
../Core/Src/StartEvent.cpp \
../Core/Src/StartMeasureEvent.cpp \
../Core/Src/lcd.cpp \
../Core/Src/main.cpp 

C_DEPS += \
./Core/Src/main.d \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d 

OBJS += \
./Core/Src/CalculationEvent.o \
./Core/Src/CancelEvent.o \
./Core/Src/DisplayEvent.o \
./Core/Src/FinalCalculationResultEvent.o \
./Core/Src/LedEvents.o \
./Core/Src/OLED_DisplayEvent.o \
./Core/Src/SetUpLcd.o \
./Core/Src/StartEvent.o \
./Core/Src/StartMeasureEvent.o \
./Core/Src/lcd.o \
./Core/Src/main.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o 

CPP_DEPS += \
./Core/Src/CalculationEvent.d \
./Core/Src/CancelEvent.d \
./Core/Src/DisplayEvent.d \
./Core/Src/FinalCalculationResultEvent.d \
./Core/Src/LedEvents.d \
./Core/Src/OLED_DisplayEvent.d \
./Core/Src/SetUpLcd.d \
./Core/Src/StartEvent.d \
./Core/Src/StartMeasureEvent.d \
./Core/Src/lcd.d \
./Core/Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.cpp Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/CalculationEvent.cyclo ./Core/Src/CalculationEvent.d ./Core/Src/CalculationEvent.o ./Core/Src/CalculationEvent.su ./Core/Src/CancelEvent.cyclo ./Core/Src/CancelEvent.d ./Core/Src/CancelEvent.o ./Core/Src/CancelEvent.su ./Core/Src/DisplayEvent.cyclo ./Core/Src/DisplayEvent.d ./Core/Src/DisplayEvent.o ./Core/Src/DisplayEvent.su ./Core/Src/FinalCalculationResultEvent.cyclo ./Core/Src/FinalCalculationResultEvent.d ./Core/Src/FinalCalculationResultEvent.o ./Core/Src/FinalCalculationResultEvent.su ./Core/Src/LedEvents.cyclo ./Core/Src/LedEvents.d ./Core/Src/LedEvents.o ./Core/Src/LedEvents.su ./Core/Src/OLED_DisplayEvent.cyclo ./Core/Src/OLED_DisplayEvent.d ./Core/Src/OLED_DisplayEvent.o ./Core/Src/OLED_DisplayEvent.su ./Core/Src/SetUpLcd.cyclo ./Core/Src/SetUpLcd.d ./Core/Src/SetUpLcd.o ./Core/Src/SetUpLcd.su ./Core/Src/StartEvent.cyclo ./Core/Src/StartEvent.d ./Core/Src/StartEvent.o ./Core/Src/StartEvent.su ./Core/Src/StartMeasureEvent.cyclo ./Core/Src/StartMeasureEvent.d ./Core/Src/StartMeasureEvent.o ./Core/Src/StartMeasureEvent.su ./Core/Src/lcd.cyclo ./Core/Src/lcd.d ./Core/Src/lcd.o ./Core/Src/lcd.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32f4xx_hal_msp.cyclo ./Core/Src/stm32f4xx_hal_msp.d ./Core/Src/stm32f4xx_hal_msp.o ./Core/Src/stm32f4xx_hal_msp.su ./Core/Src/stm32f4xx_it.cyclo ./Core/Src/stm32f4xx_it.d ./Core/Src/stm32f4xx_it.o ./Core/Src/stm32f4xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f4xx.cyclo ./Core/Src/system_stm32f4xx.d ./Core/Src/system_stm32f4xx.o ./Core/Src/system_stm32f4xx.su

.PHONY: clean-Core-2f-Src

