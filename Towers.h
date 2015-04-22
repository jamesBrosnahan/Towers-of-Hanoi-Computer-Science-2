#ifndef TOWER_H 
#define	TOWER_H

#include "MyStack.h"
#include <iostream>


		
class Towers {
	private:
		MyStack<int>* peg1; //start
		MyStack<int>* peg2; //tmp
		MyStack<int>* peg3; //destination
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
			//delete peg1;
			//delete peg2; 
			//delete peg3;
		} 

		void start() {
			// your code
			int disks = peg1->size();
			moveDisks(disks,*peg1,*peg3,*peg2);
			//plotPegs();
		}

		void MoveTower(unsigned int disk,MyStack<int> source,MyStack<int> destination,MyStack<int> spare){
			//MyStack<int> source = source_;
			//MyStack<int> destination = destination_;
			//MyStack<int> spare = spare_;
			if((disk) == 1){
	   			 destination.push(source.top());
				 source.pop();
			}else if((source.size()) == 0){

			}else{
   				 MoveTower((source.size()) - 1, source, spare, destination);
    				 destination.push(source.top());
				 source.pop();
  				 MoveTower((source.size()) - 1, spare, destination, source);
			}
		}

		void moveDisks(int num, MyStack<int>& source,MyStack<int>& destination,MyStack<int>& spare){

			if(num > 0){
				moveDisks(num - 1, source, spare, destination);
				destination.push(source.top());
				source.pop();
				plotPegs();
				moveDisks(num - 1, spare, destination, source);
			}



		}
		
	private:
		void plotPegs() const; 
		// your code
};

#endif
