SRCS = cpdup.c fsmid.c hclink.c hcproto.c misc.c
OBJS = $(SRCS:%.c=%.o)
DEPS = $(SRCS:%.c=%.d)

CPPFLAGS += -D_GNU_SOURCE -D__USE_FILE_OFFSET64 -MD -MP

ifndef NOPTHREADS
CFLAGS += -DUSE_PTHREADS=1 -pthread
endif

ifdef NOMD5
CFLAGS += -DNOMD5
else
SRCS += md5.c md5hl.c md5c.c
endif

all: cpdup

cpdup: $(OBJS)

clean:
	-rm -f $(OBJS) $(DEPS)

-include $(DEPS)
