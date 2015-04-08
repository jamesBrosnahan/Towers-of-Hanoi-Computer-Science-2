# project4.make -- this is a comment line, ignored by make utility 

a.exe : program4.o Towers.o 
	g++ -o a.exe program4.o Towers.o 

program4.o : program4.cpp Towers.cpp Towers.h MyStack.h 
	g++ -c program4.cpp 

Towers.o : Towers.cpp Towers.h MyStack.h 
	g++ -c Towers.cpp

clean : 
	rm *.o a.exe 
# END OF MAKEFILE 

