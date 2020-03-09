int main(int argc, char const *argv[])
{
/*
STACK=A Stack is a list of elements in which an element may be inserted or deleted only at one end,called the top of the stack

Stack is a specialized data storage structure(Abstract Data Type)

Array and Stack Comparison
#Unlike arrays,access of elements in a stack is restricted.
#It has two main functions push and pop.
#Insertion in a stack done using push function and removal from a stack is done using pop function.

POINTS
Stack allows access to only the last element inserted hance,an item can be inserted or removed from the stack from one called the top of the stack

It is therefore,also called Last-In-First-Out(LIFO)list

STACK can be implemented as 
Array
Dynamic Array
Linked List

=============================================
ALGORITHM PUSH(STACK,TOP,MAXSTACK,ITEM)
This is procedure pushes  an item onto a stack.

   check [stack already filled]
1  if TOP==MAXSTACK means last array index ,Then
   print:OVERFLOW and Return.
2  Set TOP=TOP+1;
3  Set STACK[TOP]=ITEM;
4  return
==============================================
ALGORITHM POP(STACK,TOP,ITEM)
This is procedure deletes the top element of stack and assign it to the variable ITEM.
1  if TOP==0,Then
   print:UNDERFLOW and Return.
2  Set ITEM=STACK[TOP];
3  Set TOP=TOP-1;
4  return
*/


/*
A Structure to Represent a stack
struct ArrayStack{
	int top;
	unsigned capacity;
	int *array;
}
 */
	return 0;
}
//By Navjot Singh Prince