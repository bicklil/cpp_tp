CC=g++
OBJ= main.o

main.exe: $(OBJ) libComplexe.a
	$(CC) $(OBJ) -o main.exe -lComplexe -L.
	./main.exe

# biblio que sur le main.o pour l'editeur de lien
libComplexe.a: complexe.o
	ar cr libComplexe.a complexe.o
	ranlib libComplexe.a

main.o: main.cc 
	$(CC) -c main.cc

complexe.o: complexe.cc complexe.h
	$(CC) -c complexe.cc

clean:
	rm -rf *.o
	rm -rf *.exe
