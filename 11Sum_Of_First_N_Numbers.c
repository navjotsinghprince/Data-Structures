#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int func(int);
//gcc 11Sum_Of_First_N_Numbers.c ==only true programmer can understand this line...... 

int main()
{

int num,ans;
printf("Enter the number which you want to sum");
scanf("%d",&num);
ans=func(num);
printf("The Sum Of Your number is :%d",ans);
getch();
return 0;
}
int func(int n){
 int s;
 if(n==1){
	return(n);
 }else{
	s=n+func(n-1); //Understand this line guys 
	return(s);
 }
}
//by Navjot Singh Prince:)
