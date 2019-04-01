prog: enigme.o main.o
	gcc enigme.o main.o -o -lSDL -lSDL_ttf prog -g
main.o:main.c
	gcc -c main.c -lSDL -lSDL_ttf -g
enigme.o:enigme.c
	gcc -c enigme.c -lSDL -lSDL_ttf -g
