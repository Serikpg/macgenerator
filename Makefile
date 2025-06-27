all: macgenerator.exe

CC=gcc

macgenerator.o: macgenerator.c
	$(CC) -c macgenerator.c -o $@ 

macgenerator.exe: macgenerator.o
	$(CC) $^ -o $@

clean:
	rm *.exe *.o
