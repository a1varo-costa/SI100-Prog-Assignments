CC := gcc

CFLAGS := -std=c99 -pedantic -Wall
LDFLAGS := -lm

SRCDIR := src
SRC := $(wildcard $(addsuffix /*.c, $(SRCDIR)))

BINDIR := bin
BIN := $(SRC:src/%.c=$(BINDIR)/%)

.PHONY: all clean

all: $(BIN)

$(BINDIR)/%: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	@rm -f $(BINDIR)/*
