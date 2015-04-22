// Specification file for the MyIntStack class
#ifndef MYSTACK_H
#define MYSTACK_H

#include <cstddef>

template <class T>
class MyStack
{
private:
   T *stackArray;  // Pointer to the stack array
   int stackSize;    // The max stack size
   int numElements;         // Indicates the number of objects on the stack

public:
//// You have to define all the member functions!!!

//***********************************************
// Constructor                                  *
// This constructor creates an empty stack.     *
//***********************************************
   MyStack(int);

   // Copy constructor
   MyStack(const MyStack &);

   // Destructor
   ~MyStack();
   
   // Stack operations
   void push(T);
   void pop();
   T top();
   bool isFull() const;
   bool isEmpty() const;
   unsigned int size() const;
}; 

// your code for member functions
template <class T>
MyStack<T>::MyStack(int size){

	stackArray = new T[size];
	stackSize = size;
	numElements = 0;


}
// Copy constructor
template <class T>
MyStack<T>::MyStack(const MyStack &other){

	if(other.stackSize > 0){
		stackArray = new T[other.stackSize];
	}else{
		stackArray = NULL;
	}

	stackSize = other.stackSize;

	for(int i = 0; i < stackSize; i++){
		stackArray[i] = other.stackArray[i];
	}

	numElements = other.numElements;
	

}

// Destructor
template <class T>
MyStack<T>::~MyStack(){
	delete [] stackArray;
}

// Stack operations
template <class T>
void MyStack<T>::push(T obj){
	if(!isFull()){
		stackArray[numElements] = obj;
		numElements++;
	}
}

template <class T>
void MyStack<T>::pop(){
	if(!isEmpty()){
		numElements--;
	}
}

template <class T>
T MyStack<T>::top() {

	if(!isEmpty()) return stackArray[numElements - 1];

}

template <class T>
bool MyStack<T>::isFull() const{return (stackSize == numElements);}

template <class T>
bool MyStack<T>::isEmpty() const{return (numElements == 0);}

template <class T>
unsigned int MyStack<T>::size() const{return numElements;}

#endif 
