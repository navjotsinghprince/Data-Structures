#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//gcc 17Stack_Dynamic_Array.c


//define structure 
struct ArrayStack
{
	int top;            //use for index traversing
	int capacity;      //capacity of dynamic array
	int *arrry;       //pointer points to dynamic array
};
 
//create stack function and return address of dynamic array which is created with help of this function
struct ArrayStack* CreateStack(int cap){
struct ArrayStack *stack;
stack=malloc(sizeof(struct ArrayStack)); //ek dynamic struct type variable create hoga
stack->top=-1;
stack->capacity=cap;

stack->arrry=malloc(sizeof(int) * stack->capacity);
return (stack); //return address of stack
}

//create function to check array full or not
int IsFull(struct ArrayStack *stack){
if(stack->top==stack->capacity-1){
	return(1);
}else{
	return (0);
}
}

//Create Function to check array empty or not
int IsEmpty(struct ArrayStack *stack){
 if(stack->top==-1){
	 return (1);
 }else{
	 return (0);
 }
}

//Create Push function to add elements in array
void Push (struct ArrayStack *stack,int item){
if(!IsFull(stack)){
stack->top++;                   //top ki value increment hogi
stack->arrry[stack->top]=item; //phli bar insert kiya toh item arary ke 0 index pe jayega stack->top means 0
}
}

//Create Pop function to get items
int Pop (struct ArrayStack *stack){
 int carryitem;
 if(!IsEmpty(stack)){ //agr stack empty nhi hai toh ye chelega
 carryitem=stack->arrry[stack->top];  //stack array pointer me array ka  base address hai aur ye access kr lega
 stack->top--;  //drement kiya stack
 return(carryitem);
  }
	
 return (-1); //joki ki indicate krega ki array empty hai
 
}

//Now Start main program and use above methods
int main(){
int choice,item;
struct ArrayStack *stack;
stack=CreateStack(4);  //create stack array send capacity of array
while(1){
	//here you can use screen clear code...
	//system("cls");
	printf("\n1 Push");
	printf("\n2 Pop");
	printf("\n3 Exit");
	printf("\n4 Enter Your Choice");
	scanf("%d",&choice);

	switch (choice){
	case 1:
	printf("\nEnter a Number");
	scanf("%d",&item);
	Push(stack,item); 
	break;

	case 2:
	item=Pop(stack);
	if(item==-1){
		printf("Oops! stack is empty");
	}else{
		printf("Your Poped Value is: %d",item);
	}
	break;
	
	case 3:
	exit(0);
	break;
  }
	getch();
 }
 return 0;
}

//By Navjot Singh Prince:)