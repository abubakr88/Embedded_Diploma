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
LED_Blink_all.lss \

FLASH_IMAGE += \
LED_Blink_all.hex \

EEPROM_IMAGE += \
LED_Blink_all.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: LED_Blink_all.elf secondary-outputs

# Tool invocations
LED_Blink_all.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LED_Blink_all.map -mmcu=atmega32 -o "LED_Blink_all.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LED_Blink_all.lss: LED_Blink_all.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LED_Blink_all.elf  >"LED_Blink_all.lss"
	@echo 'Finished building: $@'
	@echo ' '

LED_Blink_all.hex: LED_Blink_all.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex LED_Blink_all.elf  "LED_Blink_all.hex"
	@echo 'Finished building: $@'
	@echo ' '

LED_Blink_all.eep: LED_Blink_all.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex LED_Blink_all.elf  "LED_Blink_all.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LED_Blink_all.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t LED_Blink_all.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LED_Blink_all.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
