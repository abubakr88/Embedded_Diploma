################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Exponential_function_e^x.c \
../src/source1.c \
../src/source2.c 

OBJS += \
./src/Exponential_function_e^x.o \
./src/source1.o \
./src/source2.o 

C_DEPS += \
./src/Exponential_function_e^x.d \
./src/source1.d \
./src/source2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


