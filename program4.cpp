#include <cstdlib>
#include "Towers.h"
#include <iostream>
using namespace std;

/////// DO NOT CHANGE THIS FUNCTION ////////
int main(int argc, char* argv[]) {
	
	int numDisk = 3;
	if (argc > 1)
		numDisk = atoi(argv[1]);	
			
	Towers t(numDisk);
	t.start();	
	return 0;
}
