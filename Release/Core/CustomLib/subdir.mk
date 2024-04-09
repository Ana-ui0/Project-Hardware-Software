################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/CustomLib/ssd1306.c \
../Core/CustomLib/ssd1306_fonts.c \
../Core/CustomLib/ssd1306_tests.c 

CPP_SRCS += \
../Core/CustomLib/Bitmap.cpp 

C_DEPS += \
./Core/CustomLib/ssd1306.d \
./Core/CustomLib/ssd1306_fonts.d \
./Core/CustomLib/ssd1306_tests.d 

OBJS += \
./Core/CustomLib/Bitmap.o \
./Core/CustomLib/ssd1306.o \
./Core/CustomLib/ssd1306_fonts.o \
./Core/CustomLib/ssd1306_tests.o 

CPP_DEPS += \
./Core/CustomLib/Bitmap.d 


# Each subdirectory must supply rules for building sources it contributes
Core/CustomLib/%.o Core/CustomLib/%.su Core/CustomLib/%.cyclo: ../Core/CustomLib/%.cpp Core/CustomLib/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/CustomLib/%.o Core/CustomLib/%.su Core/CustomLib/%.cyclo: ../Core/CustomLib/%.c Core/CustomLib/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-CustomLib

clean-Core-2f-CustomLib:
	-$(RM) ./Core/CustomLib/Bitmap.cyclo ./Core/CustomLib/Bitmap.d ./Core/CustomLib/Bitmap.o ./Core/CustomLib/Bitmap.su ./Core/CustomLib/ssd1306.cyclo ./Core/CustomLib/ssd1306.d ./Core/CustomLib/ssd1306.o ./Core/CustomLib/ssd1306.su ./Core/CustomLib/ssd1306_fonts.cyclo ./Core/CustomLib/ssd1306_fonts.d ./Core/CustomLib/ssd1306_fonts.o ./Core/CustomLib/ssd1306_fonts.su ./Core/CustomLib/ssd1306_tests.cyclo ./Core/CustomLib/ssd1306_tests.d ./Core/CustomLib/ssd1306_tests.o ./Core/CustomLib/ssd1306_tests.su

.PHONY: clean-Core-2f-CustomLib

