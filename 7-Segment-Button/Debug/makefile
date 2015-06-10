################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
7-Segment-Button.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: 7-Segment-Button.elf secondary-outputs

# Tool invocations
7-Segment-Button.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,7-Segment-Button.map -mmcu=atmega32 -o "7-Segment-Button.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

7-Segment-Button.lss: 7-Segment-Button.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 7-Segment-Button.elf  >"7-Segment-Button.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 7-Segment-Button.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t 7-Segment-Button.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) 7-Segment-Button.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
