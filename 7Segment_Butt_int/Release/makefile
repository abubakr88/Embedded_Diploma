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
7Segment_Butt_int.lss \

FLASH_IMAGE += \
7Segment_Butt_int.hex \

EEPROM_IMAGE += \
7Segment_Butt_int.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: 7Segment_Butt_int.elf secondary-outputs

# Tool invocations
7Segment_Butt_int.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,7Segment_Butt_int.map -mmcu=atmega32 -o "7Segment_Butt_int.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

7Segment_Butt_int.lss: 7Segment_Butt_int.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 7Segment_Butt_int.elf  >"7Segment_Butt_int.lss"
	@echo 'Finished building: $@'
	@echo ' '

7Segment_Butt_int.hex: 7Segment_Butt_int.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex 7Segment_Butt_int.elf  "7Segment_Butt_int.hex"
	@echo 'Finished building: $@'
	@echo ' '

7Segment_Butt_int.eep: 7Segment_Butt_int.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex 7Segment_Butt_int.elf  "7Segment_Butt_int.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 7Segment_Butt_int.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t 7Segment_Butt_int.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) 7Segment_Butt_int.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
