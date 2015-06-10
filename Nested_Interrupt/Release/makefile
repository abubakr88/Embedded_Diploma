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
Nested_Interrupt.lss \

FLASH_IMAGE += \
Nested_Interrupt.hex \

EEPROM_IMAGE += \
Nested_Interrupt.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Nested_Interrupt.elf secondary-outputs

# Tool invocations
Nested_Interrupt.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Nested_Interrupt.map -mmcu=atmega32 -o "Nested_Interrupt.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Nested_Interrupt.lss: Nested_Interrupt.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Nested_Interrupt.elf  >"Nested_Interrupt.lss"
	@echo 'Finished building: $@'
	@echo ' '

Nested_Interrupt.hex: Nested_Interrupt.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Nested_Interrupt.elf  "Nested_Interrupt.hex"
	@echo 'Finished building: $@'
	@echo ' '

Nested_Interrupt.eep: Nested_Interrupt.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Nested_Interrupt.elf  "Nested_Interrupt.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Nested_Interrupt.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t Nested_Interrupt.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Nested_Interrupt.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
