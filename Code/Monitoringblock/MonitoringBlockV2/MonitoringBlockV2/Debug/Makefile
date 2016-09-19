################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../Headers


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Adc.c \
../Sensors.c \
../Startup.c \
../Display.c \
../Interupt.c \
../MonitoringBlockV2.c \
../PressureSensor.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Adc.o \
Sensors.o \
Startup.o \
Display.o \
Interupt.o \
MonitoringBlockV2.o \
PressureSensor.o


OBJS_AS_ARGS +=  \
Adc.o \
Sensors.o \
Startup.o \
Display.o \
Interupt.o \
MonitoringBlockV2.o \
PressureSensor.o


C_DEPS +=  \
Adc.d \
Sensors.d \
Startup.d \
Display.d \
Interupt.d \
MonitoringBlockV2.d \
PressureSensor.d


C_DEPS_AS_ARGS +=  \
Adc.d \
Sensors.d \
Startup.d \
Display.d \
Interupt.d \
MonitoringBlockV2.d \
PressureSensor.d


OUTPUT_FILE_PATH +=MonitoringBlockV2.elf

OUTPUT_FILE_PATH_AS_ARGS +=MonitoringBlockV2.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

# AVR32/GNU C Compiler















./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)D:\Program files\msvisualstd10\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -funsigned-char -funsigned-bitfields -O1 -fpack-struct -fshort-enums -g2 -Wall -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -mmcu=atmega128a   -o"$@" "$<" 
	@echo Finished building: $<



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)D:\Program files\msvisualstd10\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="MonitoringBlockV2.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group  -mmcu=atmega128a  
	@echo Finished building target: $@
	"D:\Program files\msvisualstd10\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "MonitoringBlockV2.elf" "MonitoringBlockV2.hex"
	"D:\Program files\msvisualstd10\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "MonitoringBlockV2.elf" "MonitoringBlockV2.eep" || exit 0
	"D:\Program files\msvisualstd10\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objdump.exe" -h -S "MonitoringBlockV2.elf" > "MonitoringBlockV2.lss"
	"D:\Program files\msvisualstd10\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "MonitoringBlockV2.elf" "MonitoringBlockV2.srec"
	"D:\Program files\msvisualstd10\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-size.exe" "MonitoringBlockV2.elf"
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS)$(C_DEPS_AS_ARGS) $(EXECUTABLES) 
	rm -rf "MonitoringBlockV2.elf" "MonitoringBlockV2.a" "MonitoringBlockV2.hex" "MonitoringBlockV2.lss" "MonitoringBlockV2.eep" "MonitoringBlockV2.map" "MonitoringBlockV2.srec"
	