CC=g++
OBJ=complexe.o test.o polynome.o vecteurcomplexe.o

test.exe: $(OBJ)
	$(CC) $(OBJ) -o test.exe

test.o: test.cc complexe.h vecteurcomplexe.h
	$(CC) -c test.cc

complexe.o: complexe.h complexe.cc
	$(CC) -c complexe.cc

polynome.o: polynome.h polynome.cc
	$(CC) -c polynome.cc

vecteurcomplexe.o: vecteurcomplexe.h vecteurcomplexe.cc complexe.h
	$(CC) -c vecteurcomplexe.cc

clean:
	rm -rf *.o
	rm -rf *.exe
