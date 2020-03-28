################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
arctan_2020asc_stm32f767zi.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
arctan_2020asc_stm32f767zi.list \

OBJCOPY_BIN += \
arctan_2020asc_stm32f767zi.bin \


# All Target
all: arctan_2020asc_stm32f767zi.elf secondary-outputs

# Tool invocations
arctan_2020asc_stm32f767zi.elf: $(OBJS) $(USER_OBJS) /home/rain/RUSolar/STMstuff/arctan_2020asc_stm32f767zi/STM32F767ZITX_FLASH.ld
	arm-none-eabi-gcc -o "arctan_2020asc_stm32f767zi.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"/home/rain/RUSolar/STMstuff/arctan_2020asc_stm32f767zi/STM32F767ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="arctan_2020asc_stm32f767zi.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

arctan_2020asc_stm32f767zi.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "arctan_2020asc_stm32f767zi.list"
	@echo 'Finished building: $@'
	@echo ' '

arctan_2020asc_stm32f767zi.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "arctan_2020asc_stm32f767zi.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
