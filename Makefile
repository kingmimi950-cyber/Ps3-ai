# PS3 AI — PSL1GHT Makefile
# Requires the PS3DEV toolchain and PSL1GHT build rules.
.SUFFIXES:

TARGET := PS3_AI
TITLE := PS3 AI
APPID := PSAI00001
CONTENTID := UP0001-$(APPID)_00-0000000000000000

OFILES := src/main.o
CFLAGS += -O2 -Wall
LIBS += -lsysutil -llv2

include $(PSL1GHT)/ppu_rules

.PHONY: all pkg clean
all: $(TARGET).elf

pkg: $(TARGET).pkg

clean:
	rm -rf build *.o src/*.o $(TARGET).elf $(TARGET).self $(TARGET).fake.self $(TARGET).pkg $(TARGET).gnpdrm.pkg
