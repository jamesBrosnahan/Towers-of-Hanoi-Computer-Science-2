// Specification file for the MyIntStack class
#ifndef MYSTACK_H
#define MYSTACK_H

template <class T>
class MyStack
{
private:
   T *stackArray;  // Pointer to the stack array
   int stackSize;    // The max stack size
   int numElememts;         // Indicates the number of objects on the stack

public:
//// You have to define all the member functions!!!

//***********************************************
// Constructor                                  *
// This constructor creates an empty stack.     *
//***********************************************
   MyStack(int){;}

   // Copy constructor
   MyStack(const MyStack &){;}

   // Destructor
   ~MyStack(){;}
   
   // Stack operations
   void push(T){;}
   void pop(){;}
	T top() {;}
   bool isFull() const{;}
   bool isEmpty() const{;}
	int size() const{;}
}; 

// your code for member functions

#endif 
