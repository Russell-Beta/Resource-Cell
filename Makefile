CC = gcc
CFLAGS = -g -W -Wall
TARGET = ResourCell

OBJECTS = main.o

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o ResourCell

main.o: src/main.c