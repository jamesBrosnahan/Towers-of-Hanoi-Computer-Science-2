#ifndef TOWER_H 
#define	TOWER_H

#include "MyStack.h"
#include <iostream>
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
			int tmp;
			
			tmp = peg1->top();
			peg3->push(tmp);
			peg1->pop();
			/* 
			
			std::cout << peg1->top() << std::endl;
			//plotPegs();
			peg1->pop();
			//plotPegs();
			peg2->push(peg1->top());
			std::cout << peg1->top() << std::endl;
			peg1->pop();
			
			peg2->push(peg3->top());
			std::cout << peg3->top() << std::endl;
			peg3->pop();
			
			peg3->push(peg1->top());
			std::cout << peg1->top() << std::endl;
			peg1->pop();
			*/

			while(!peg1->isEmpty()){
				std::cout << peg1->top() << std::endl;
				peg1->pop();
			}
			while(!peg2->isEmpty()){
				std::cout << peg2->top() << std::endl;
				peg2->pop();
			}
			while(!peg3->isEmpty()){
				std::cout << peg3->top() << std::endl;
				peg3->pop();
			}
			

		}
		
	private:
		void plotPegs() const; 
		// your code
};

#endif
