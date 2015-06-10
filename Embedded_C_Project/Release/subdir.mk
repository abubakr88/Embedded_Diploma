################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App_Seg.c \
../DIO.c \
../app.c \
../button.c \
../led.c \
../main.c \
../segment.c 

OBJS += \
./App_Seg.o \
./DIO.o \
./app.o \
./button.o \
./led.o \
./main.o \
./segment.o 

C_DEPS += \
./App_Seg.d \
./DIO.d \
./app.d \
./button.d \
./led.d \
./main.d \
./segment.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


