C = gcc
CFLAGS = -Wall -Wextra

SRC = main.c map_loader.c render.c player.c
OBJ = $(SRC:.c=.o)

all: game

game: $(OBJ)
	$(CC) $(CFLAGS) -o game $(OBJ)

clean:
	rm -f game $(OBJ)
