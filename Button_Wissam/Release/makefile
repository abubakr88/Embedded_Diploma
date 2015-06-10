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
Button_Wissam.lss \

FLASH_IMAGE += \
Button_Wissam.hex \

EEPROM_IMAGE += \
Button_Wissam.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Button_Wissam.elf secondary-outputs

# Tool invocations
Button_Wissam.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Button_Wissam.map -mmcu=atmega32 -o "Button_Wissam.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Button_Wissam.lss: Button_Wissam.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Button_Wissam.elf  >"Button_Wissam.lss"
	@echo 'Finished building: $@'
	@echo ' '

Button_Wissam.hex: Button_Wissam.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Button_Wissam.elf  "Button_Wissam.hex"
	@echo 'Finished building: $@'
	@echo ' '

Button_Wissam.eep: Button_Wissam.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Button_Wissam.elf  "Button_Wissam.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Button_Wissam.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t Button_Wissam.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Button_Wissam.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
