CC=g++
OBJ=Personne.o test.o Professeur.o Etudiant1.o

test.exe: $(OBJ)
	$(CC) $(OBJ) -o test.exe

test.o: test.cc Personne.h
	$(CC) -c test.cc

Personne.o:Personne.cc Personne.h
	$(CC) -c Personne.cc

Professeur.o: Professeur.cc Professeur.h Personne.h
	$(CC) -c Professeur.cc

Etudiant1.o: Etudiant1.h Etudiant1.cc Personne.h
	$(CC) -c Etudiant1.cc

Matiere.o: Matiere.h Matiere.cc
	$(CC) -c Matiere.cc

Etudiant2.o: Etudiant2.h Etudiant2.cc
	$(CC) -c Etudiant2.cc

clean:
	rm -rf *.o
	rm -rf *.exe
