//yeh alloccate ki gyi memory ko adjust krne k liye use kiya jata hai,,
//SYNTAX=*void realloc(void*ptr,new size in byte);
//new pointer=(casttype*)realloc(ptr,new size in byte);

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
int s,*p,*ptr,i,sum=0,*q; //variable declaration
int *new;
printf("enter a size of array");
scanf("%d",&s);

ptr=(int*)malloc(s*sizeof(int)); 
p=ptr;

//check array successfully created or not
if(ptr==NULL)
{
printf("out of memory");
exit(0);
}

//get elements from user
printf("enter the elements");
for(i=1;i<=s;i++)
{
scanf("%d",ptr);
sum=sum+*ptr;
ptr++;
}

//print values
printf("elements are:");
for(i=1;i<=s;i++)
{
printf("%d\n", *p);
p++;
}

printf("addition is %d\n",sum);

//new size of array
int n;
printf("enter a new size of array");
scanf("%d",&n);

//again memory re_allocate
new=(int *) realloc (ptr,n*sizeof(int));
printf("%u",new); //error
q=new;

//Again check array successfully created or not
if(new==NULL)
{
printf("out of memory");
exit(0);
}

//print new reallocked memory
printf("reallocked memory %u",new);

//get new elements from user
printf("enter new elements");
for(i=1;i<=s;i++)
{
scanf("%d",new);
sum=sum+*new;
new++;
}

//print new elements
printf("elements are");
for(i=1;i<=s;i++)
printf("%d",*q);
q++;

//again print new addition
printf("new addition is %d",sum);

getch();
//by Navjot Singh Prince:)
}