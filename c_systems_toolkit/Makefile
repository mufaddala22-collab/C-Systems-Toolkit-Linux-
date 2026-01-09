# ===============================
# C Systems Toolkit - Makefile
# ===============================

CC = gcc
CFLAGS = -Wall -Wextra -O0 -Iinclude
TARGET = systems_toolkit

SRC = src/main.c \
      src/array_ops.c \
      src/struct_ops.c \
      src/file_ops.c \
      src/bit_ops.c \
      src/memory_ops.c \
      src/perf_test.c

OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Link object files
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Remove build files
clean:
	rm -f $(OBJ) $(TARGET)

# Rebuild everything
rebuild: clean all

.PHONY: all clean rebuild
