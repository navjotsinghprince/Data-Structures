#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//gcc Pointers.c
//Pointers in depth
//total byte of c code =65536
//0-65535
int main()
{
	int x=5;
//int =this is data type
//x =name of memory block
//5 =content on memory block
//276376=address of memory block may be anythig...

printf("%d",x);   //5
printf("%u\n",&x); //address of 322236 may be anything

//--------------------------------------------------------------------------
//& is known as a address of operator
// & is an unary operator
// Oprand must be name of the variable before gives address of variable
//  It is also refernces as references variables

//------------------------------------------------------------------------------
//* is an indirection operator
//It is also known as deferencing operator 
//it is an unary operator
//it takes an address as an argument
//it returns the content/container where address is its argument

//---------------Most Important Point ---------------------------------
//Pointer is a variable that contains address of another variable
//Pointer always consumes 2 byte in memory block
int b= 4;
int *p;  //declare Pointer
p=&b;    
printf("Your value is : %d\n",b); //value of 4
printf("Variable Address id %u\n",&b);  //address of 322236 may be anything
printf("THe result value is : %d\n",*p);     //*4653 means value of 4

//Observe Here
int x=10,*j;
j=&x;  //suppose 646333
printf("%d%u\n",x,j); //10 646333 
printf("%d%u",*j,&x); //10 646333
printf("%u",*&j);   //means &j me 3000 uska apna address hai
//aur isme value 646333 hai isliye *3000=646333


//Extended Consept of pointer
int x=5,*p,**q,***r;
p=&x;
q=&p;
r=&q;

//means that 
//**q=5 //index level indirection
//***r=5


 
/*Another Point
We can add or subtract integer to/from an address
pointer+n=pointer+sizeof(type_of_pointer)*n 
Pointer When Incremented,always point to immediately next block of its own type
*/

/*
int i,a[5],*p;
p=&a[0];      //a ke phle index ka address p me jayega
for(i=0;i<=4;i++){
	scanf("%d",&a[i]); //index 0 me value jayegi
}
*/

/*
int i,a[5],*p;
p=&a[0]; //a ke phle index ka address p me jayega
for(i=0;i<=4;i++){
scanf("%d",p+i); //index 0 me value jayegi bs fark ye hai ki esme pointer ke threw value jayegi
printf("%d",*(p+i)); //first index ki value print ho jayegi
} 
*/

//by Navjot Singh Prince:)
getch();
return 0;
}
