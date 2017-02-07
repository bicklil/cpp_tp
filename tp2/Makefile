CC=g++
OBJ= echangiste.o main.o complexe.o

main: $(OBJ)
	$(CC) $(OBJ) -o main
	./main

echangiste.o: echangiste.cc echangiste.h complexe.h
	$(CC) -c echangiste.cc

main.o: main.cc echangiste.h complexe.h
	$(CC) -c main.cc

complexe.o: complexe.cc complexe.h
	$(CC) -c complexe.cc
clean:
	rm -rf *.o
