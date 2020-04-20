# Source Code
C_SOURCE=$(wildcard *.c)
OBJ=$(C_SOURCE:.c=.o)

# Compiler
CC=gcc

# Flags for compiler
CC_FLAGS=-c         \
         -Wall      \

#
# Compilation and linking
#
all: main

main: $(OBJ)
	$(CC) -o main $^

%.o: %.c
	$(CC) $^ $(CC_FLAGS)

clean:
	rm *.o main
