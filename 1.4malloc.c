//yeh diye gye hisab se ek block create krta hai
//ex:-ptr=(int*)malloc(10);
//yeh 10 byte ka block bnayega =based on bit architecture

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,*ptr,sum=0,i;
int *p;

printf("Enter The size of array");
scanf("%d",&n);

 ptr=(int*)malloc(n*sizeof(int));
 p=ptr; //get first block address of dynamic array

//Check array created or not
if(ptr==NULL)
 {
printf("Out Of memory");
exit(0);
}

//Enter values from user
printf("enter the elements of array");
for(i=1;i<=n;i++)
{
scanf("%d",ptr); //store value to first block address
sum=sum+*ptr; //sum of each value 
ptr++; //increment value for next block
}


//print values
printf("elements are:");
 for(i=1;i<=n;i++){
 printf("%d\n", *p);
 p++;
 }

//finally print addition of sum
printf("addition is %d",sum);
return 0;

//by Navjot Singh Prince:)
}