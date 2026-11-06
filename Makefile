
.SUFFIXES:

TARGET  := Mustafa-Chess
TITLE   := Mustafa Chess
APPID   := MSTC00001

SOURCES := source
INCLUDES := include

OFILES := $(SOURCES)/main.o

CFLAGS   += -O2 -Wall -Iinclude
CXXFLAGS += -O2 -Wall -std=gnu++11 -Iinclude

include $(PSL1GHT)/ppu_rules

.PHONY: all clean

all: $(TARGET).pkg

clean:
	rm -f $(OFILES)
	rm -f $(TARGET).elf $(TARGET).self
	rm -f $(TARGET).pkg
	rm -rf build
