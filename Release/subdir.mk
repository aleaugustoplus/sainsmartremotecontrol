################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../SainSmartRemoteControl.cpp \
../moto_4wd.cpp \
../seeed_pwm.cpp 

LINK_OBJ += \
./SainSmartRemoteControl.cpp.o \
./moto_4wd.cpp.o \
./seeed_pwm.cpp.o 

CPP_DEPS += \
./SainSmartRemoteControl.cpp.d \
./moto_4wd.cpp.d \
./seeed_pwm.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
SainSmartRemoteControl.cpp.o: ../SainSmartRemoteControl.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=156-r2 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR    -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/cores/arduino" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/variants/standard" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/libraries/Wire" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/libraries/Wire/utility" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

moto_4wd.cpp.o: ../moto_4wd.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=156-r2 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR    -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/cores/arduino" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/variants/standard" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/libraries/Wire" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/libraries/Wire/utility" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

seeed_pwm.cpp.o: ../seeed_pwm.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=156-r2 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR    -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/cores/arduino" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/variants/standard" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/libraries/Wire" -I"/home/alexandre/Desktop/eclipseArduino/arduino-1.5.6-r2/hardware/arduino/avr/libraries/Wire/utility" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


