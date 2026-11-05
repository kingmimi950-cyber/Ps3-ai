TARGET		:= ps3_ai_app
TITLE		:= PS3 AI Client
APPID		:= AI0000001
CONTENT_ID	:= UP0001-$(APPID)_00-0000000000000000

PREFIX		:= $(PS3DEV)/ppu
source		:= source

CC			:= $(PREFIX)/bin/ppu-gcc
STRIP		:= $(PREFIX)/bin/ppu-strip
MKPKG		:= $(PS3DEV)/bin/pkg.py

CFLAGS		:= -O2 -Wall
LDFLAGS		:= -L$(PREFIX)/lib -lcurl -lssl -lcrypto -lz

OBJS		:= main.o

all: $(TARGET).pkg

$(TARGET).elf: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

$(TARGET).pkg: $(TARGET).elf
	$(STRIP) $<
	$(MKPKG) --contentid $(CONTENT_ID) $< $@

clean:
	rm -f *.o *.elf *.pkg
