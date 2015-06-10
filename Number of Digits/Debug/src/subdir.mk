################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Number\ of\ Digits.c 

OBJS += \
./src/Number\ of\ Digits.o 

C_DEPS += \
./src/Number\ of\ Digits.d 


# Each subdirectory must supply rules for building sources it contributes
src/Number\ of\ Digits.o: ../src/Number\ of\ Digits.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Number of Digits.d" -MT"src/Number\ of\ Digits.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


