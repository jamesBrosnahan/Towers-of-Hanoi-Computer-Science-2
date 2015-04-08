#ifndef 	TOWER_H 
#define	TOWER_H

#include "MyStack.h"

class Towers {
	private:
		MyStack<int> *peg1; //start
		MyStack<int> *peg2; //tmp
		MyStack<int> *peg3; //destination
		// your code
		
	public:
		Towers(int numDisk0) {
			// your code
		}
		~Towers() {
			// your code
		}  
		void start() {
			// your code 
		}
		
	private:
		void plotPegs() const; 
		// your code
};

#endif
