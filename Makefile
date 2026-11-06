
# Mustafa Chess - PlayStation 3
# PSL1GHT build configuration

TARGET      := Mustafa-Chess
TITLE       := Mustafa Chess
APPID       := MSTCH001

BUILD       := build
SOURCES     := source
INCLUDES    := include

CFLAGS      := -O2 -Wall
CXXFLAGS    := -O2 -Wall -std=gnu++11

LIBS        :=

include $(PSL1GHT)/ppu_rules

.PHONY: all clean pkg

all: $(TARGET).self

pkg: $(TARGET).pkg

clean:
	rm -rf $(BUILD)
	rm -f $(TARGET).elf
	rm -f $(TARGET).self
	rm -f $(TARGET).pkg
