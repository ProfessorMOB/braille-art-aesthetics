CC=gcc
CFLAGS=-Wall -Wextra -pedantic --std=c11 -Iinclude
# SRC=$(wildcard src/*.c)
SRC=src/main.c
OBJ=$(SRC:.c=.o)
BIN=bin
.PHONY: all test clean clean_again execute

all: $(BIN)

test: clean $(BIN) execute clean_again

$(BIN): $(OBJ)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean clean_again: 
	@if [ -f bin ]; then rm -r $(OBJ) $(BIN); fi

execute: 
	-@if [ -f bin ]; then ./bin; else echo "Bin not found"; fi

