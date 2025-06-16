# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Auto-detect all .c files in the current directory
SRCS = $(wildcard *.c)

# Convert source files to object files
OBJS = $(SRCS:.c=.o)

# Program name = current folder name
TARGET = $(notdir $(CURDIR))

# Default target: build everything
all: $(TARGET)

# Linking step: create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation step: create object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)
