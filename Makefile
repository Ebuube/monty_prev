# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

# Source code
SRC = $(wildcard *.c)

# Object files
OBJ = $(SRC:.c=.o)

# Name of executable
NAME = monty

# Source code checker
CHECKER = betty

# Essential files: wildcard is evaluated once
ESS_FILES := "$(wildcard monty.h)"

# Vim temporary files
VIM_TMP = $(wildcard *.swp)

# Emacs temporary files
EMACS_TMP = $(wildcard *~)


# Rules

# makefile should not compile if Essential files are missing

ifneq ($(strip $(ESS_FILES)), "")

all: $(OBJ)
	$(CC) $(CFLAGS) $? -o $(NAME)

.PHONY: clean check oclean fclean re

clean:	# Delete all temporary files and executable
	$(RM) $(NAME) $(VIM_TMP) $(EMACS_TMP)

oclean: #delete only the object files
	$(RM) $(OBJ)

fclean: oclean clean # delete all temporary files, object files and executable

re:	oclean all # Forcefully recompile all the source files

check: # Ensure source codes are `betty` compliant
	$(CHECKER) $(SRC)

endif
