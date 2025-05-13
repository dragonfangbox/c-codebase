CC=gcc

FLAGS=-Wall -o

TARGET=main.c
TARGETNAME=main

compile: $(TARGET)
	$(CC) $(FLAGS) $(TARGETNAME) $(TARGET)  src/graphics/SDLutil.c src/math.c src/DynArr.c src/LL.c -Lsrc -lSDL2 -lSDL2_image

run:
	./$(TARGETNAME)
