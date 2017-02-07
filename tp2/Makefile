CC=g++
OBJ= main.o complexe.o

main: $(OBJ)
	$(CC) $(OBJ) -o main.exe
	./main

main.o: main.cc  complexe.h
	$(CC) -c main.cc

complexe.o: complexe.cc complexe.h
	$(CC) -c complexe.cc
clean:
	rm -rf *.o
	rm -rf *.exe
