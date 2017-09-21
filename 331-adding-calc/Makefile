CC=gcc
CFLAGS=-I. -Wall -g
BIN_NAME=331-adding-calc
OBJ_DIR=objs

all: create_dirs operations
	$(CC) $(CFLAGS) -o $(BIN_NAME) main.c $(OBJ_DIR)/operations.o

operations:
	$(CC) $(CFLAGS) -o $(OBJ_DIR)/operations.o -c operations.c

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(BIN_NAME)

create_dirs:
	mkdir -p $(OBJ_DIR)
