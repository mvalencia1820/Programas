################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := c:/ti/ccsv6/tools/compiler/arm_5.1.9

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./source/DSP.obj" \
"./source/GLCD.obj" \
"./source/adc.obj" \
"./source/can.obj" \
"./source/crc.obj" \
"./source/dabort.obj" \
"./source/dcc.obj" \
"./source/eqep.obj" \
"./source/esm.obj" \
"./source/gio.obj" \
"./source/het.obj" \
"./source/lin.obj" \
"./source/mibspi.obj" \
"./source/notification.obj" \
"./source/pinmux.obj" \
"./source/rti.obj" \
"./source/spi.obj" \
"./source/sys_core.obj" \
"./source/sys_intvecs.obj" \
"./source/sys_main.obj" \
"./source/sys_mpu.obj" \
"./source/sys_pcr.obj" \
"./source/sys_phantom.obj" \
"./source/sys_pmu.obj" \
"./source/sys_selftest.obj" \
"./source/sys_startup.obj" \
"./source/sys_vim.obj" \
"./source/system.obj" \
"../source/sys_link.cmd" \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include source/subdir_vars.mk
-include source/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
AUDIO.out \

EXE_OUTPUTS__QUOTED += \
"AUDIO.out" \

BIN_OUTPUTS += \
AUDIO.hex \

BIN_OUTPUTS__QUOTED += \
"AUDIO.hex" \


# All Target
all: AUDIO.out

# Tool invocations
AUDIO.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"c:/ti/ccsv6/tools/compiler/arm_5.1.9/bin/armcl" -mv7R4 --code_state=32 --abi=eabi -me -g --display_error_number --diag_warning=225 --diag_wrap=off --enum_type=packed -z -m"AUDIO.map" --heap_size=0x800 --stack_size=0x800 -i"c:/ti/ccsv6/tools/compiler/arm_5.1.9/lib" -i"c:/ti/ccsv6/tools/compiler/arm_5.1.9/include" --reread_libs --warn_sections --display_error_number --diag_wrap=off --xml_link_info="AUDIO_linkInfo.xml" --rom_model -o "AUDIO.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

AUDIO.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: ARM Hex Utility'
	"c:/ti/ccsv6/tools/compiler/arm_5.1.9/bin/armhex"  -o "AUDIO.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "source\DSP.pp" "source\GLCD.pp" "source\adc.pp" "source\can.pp" "source\crc.pp" "source\dcc.pp" "source\eqep.pp" "source\esm.pp" "source\gio.pp" "source\het.pp" "source\lin.pp" "source\mibspi.pp" "source\notification.pp" "source\pinmux.pp" "source\rti.pp" "source\spi.pp" "source\sys_main.pp" "source\sys_pcr.pp" "source\sys_phantom.pp" "source\sys_selftest.pp" "source\sys_startup.pp" "source\sys_vim.pp" "source\system.pp" 
	-$(RM) "source\DSP.obj" "source\GLCD.obj" "source\adc.obj" "source\can.obj" "source\crc.obj" "source\dabort.obj" "source\dcc.obj" "source\eqep.obj" "source\esm.obj" "source\gio.obj" "source\het.obj" "source\lin.obj" "source\mibspi.obj" "source\notification.obj" "source\pinmux.obj" "source\rti.obj" "source\spi.obj" "source\sys_core.obj" "source\sys_intvecs.obj" "source\sys_main.obj" "source\sys_mpu.obj" "source\sys_pcr.obj" "source\sys_phantom.obj" "source\sys_pmu.obj" "source\sys_selftest.obj" "source\sys_startup.obj" "source\sys_vim.obj" "source\system.obj" 
	-$(RM) "source\dabort.pp" "source\sys_core.pp" "source\sys_intvecs.pp" "source\sys_mpu.pp" "source\sys_pmu.pp" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

