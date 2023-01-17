TARGET=.
OBJ=./obj
FLAGS=-Wall -Wextra -Werror -pedantic -std=c99 -g -Iinc

__start__: $(TARGET)/radix
	$(TARGET)/radix

$(TARGET)/radix: $(OBJ)/main.o $(OBJ)/conv.o $(OBJ)/helpers.o
	gcc $(FLAGS) -o  $(TARGET)/radix $(OBJ)/main.o $(OBJ)/conv.o $(OBJ)/helpers.o -lm

$(OBJ):
	mkdir -p $(OBJ)

$(OBJ)/main.o: src/main.c
	gcc -c $(FLAGS) -o $(OBJ)/main.o src/main.c

$(OBJ)/conv.o: src/conv.c inc/conv.h
	gcc -c $(FLAGS) -o $(OBJ)/conv.o src/conv.c -lm

$(OBJ)/helpers.o: src/helpers.c inc/helpers.h
	gcc -c $(FLAGS) -o $(OBJ)/helpers.o src/helpers.c

clear:
	rm -f $(OBJ)/*.o