CC := gcc

CFLAGS := -std=c99 -pedantic -Wall
LDFLAGS := -lm

SRC := $(basename $(wildcard *.c))
OUTDIR := bin

all: $(SRC)

%: %.c
	@ mkdir -p $(OUTDIR)
	$(CC) $(CFLAGS) -o $(OUTDIR)/$@ $^ $(LDFLAGS)
