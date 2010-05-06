OBJS = cpdup.o fsmid.o hclink.o hcproto.o misc.o

CFLAGS += -std=gnu99 -D_GNU_SOURCE -D__USE_FILE_OFFSET64

ifndef NOPTHREADS
CFLAGS += -DUSE_PTHREADS=1 -pthread
endif

ifdef NOMD5
CFLAGS += -DNOMD5
else
OBJS += md5.o md5hl.o md5c.o
endif

all: cpdup

cpdup: $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o cpdup

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	-rm -f $(OBJS)
