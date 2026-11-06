
TARGET  := Mustafa-Chess
TITLE   := Mustafa Chess
APPID   := MSTC00001

SOURCES := source
CPPFILES := $(wildcard $(SOURCES)/*.cpp)
OFILES  := $(CPPFILES:.cpp=.o)

CFLAGS   += -O2 -Wall
CXXFLAGS += -O2 -Wall -std=gnu++11

include $(PSL1GHT)/ppu_rules

.PHONY: all clean

all: $(TARGET).pkg

clean:
	rm -f $(OFILES)
	rm -f $(TARGET).elf $(TARGET).self
	rm -f $(TARGET).pkg
	rm -rf build
