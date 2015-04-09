#ifndef TOWER_H 
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
		
			for(numDisk0;numDisk0 > 0;numDisk0--){
				peg1->push(numDisk0);
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
			int n = peg1->size();
			/*begin:
			if(n != 1){
				
				n--;

			}*/

			peg3->push(peg1->top());
			peg1->pop();
			plotPegs();
			peg2->push(peg1->top());
			peg1->pop();
			plotPegs();
			peg2->push(peg3->top());
			peg3->pop();
			plotPegs();
			peg3->push(peg1->top());
			peg1->pop();
			plotPegs();
			

		}
		
	private:
		void plotPegs() const; 
		// your code
};

#endif
