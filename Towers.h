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
			peg1 = new MyStack<int>(numDisk0);
			peg2 = new MyStack<int>(numDisk0);
			peg3 = new MyStack<int>(numDisk0);
		begin:
			if(numDisk0 < 0){
				peg1->push(numDisk0);
				numDisk0--;
				goto begin;

			}else if(numDisk0 < 0){

			}else{
				
			}

				
		}
		~Towers() {
			// your code
			delete peg1;
			delete peg2; 
			delete peg3;
		}  
		void start() {
			// your code
			peg2->push(peg1->top());
			peg1->pop();
			plotPegs();

		}
		
	private:
		void plotPegs() const; 
		// your code
};

#endif
