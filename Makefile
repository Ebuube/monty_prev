# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

# Source code
SRC = $(wildcard *.c)

# Object files
OBJ = $(SRC: .c = .o)

# Name of executable
NAME = monty

# Source code checker
CHECKER = betty

all: $(OBJ)
	$(CC) $(CFLAGS) $? -o $(NAME)

.PHONY: clean check

clean:	# remove object files and executable
	$(RM) $(OBJ) $(NAME)

check: # Ensure source codes are `betty` compliant
	$(CHECKER) $(SRC)
