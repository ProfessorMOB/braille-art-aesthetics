CC=gcc
CFLAGS=-Wall -Wextra -pedantic --std=c17 -Iinclude
# SRC=$(wildcard src/*.c)
SRC=main.c get_braille_contents.c cartesian.c invert.c
# cart.c
OBJ=$(SRC:.c=.o)
BIN=braille-art-aesthetics
.PHONY: all test clean clean_again execute

all: $(BIN)

test: clean $(BIN) execute clean_again

$(BIN): $(OBJ)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean clean_again: 
	@if [ -f braille-art-aesthetics ]; then rm -r $(OBJ) $(BIN); fi

execute: 
	-@if [ -f braille-art-aesthetics]; then ./braille-art-aesthetics; else echo "Bin not found"; fi

