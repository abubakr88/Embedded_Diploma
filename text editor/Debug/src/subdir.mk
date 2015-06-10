################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/text\ editor.c 

OBJS += \
./src/text\ editor.o 

C_DEPS += \
./src/text\ editor.d 


# Each subdirectory must supply rules for building sources it contributes
src/text\ editor.o: ../src/text\ editor.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/text editor.d" -MT"src/text\ editor.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


