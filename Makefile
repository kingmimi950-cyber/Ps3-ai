
TARGET := Mustafa-Chess
BUILD  := build
SOURCES := source

CFILES := $(wildcard $(SOURCES)/*.c)
CPPFILES := $(wildcard $(SOURCES)/*.cpp)

OBJS := $(CFILES:.c=.o) $(CPPFILES:.cpp=.o)

CFLAGS += -O2 -Wall
CXXFLAGS += -O2 -Wall -std=gnu++11

include $(PSL1GHT)/ppu_rules

.PHONY: all clean

all: $(TARGET).self

clean:
	rm -f $(OBJS)
	rm -f $(TARGET).elf $(TARGET).self
	rm -rf $(BUILD)
