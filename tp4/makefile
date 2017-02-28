CC=g++
OBJ=Personne.o test.o Professeur.o

test.exe: $(OBJ)
	$(CC) $(OBJ) -o test.exe

test.o: test.cc Personne.h
	$(CC) -c test.cc

Personne.o:Personne.cc Personne.h
	$(CC) -c Personne.cc

Professeur.o: Professeur.cc Professeur.h
	$(CC) -c Professeur.cc
	
clean:
	rm -rf *.o
	rm -rf *.exe
