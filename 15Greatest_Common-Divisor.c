#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int GCD(int a,int b);

//Program to check which is greatest common divisor

int main() {
 int first,second,result;
  printf("Enter a First Postive Number:\n ");
  scanf("%d",&first);
  printf("Enter a second Postive Number:\n");
  scanf("%d",&second);
  result=GCD(first,second);
  printf("Greatest Common Divisor is :%d",result);
  getch();
  return 0;
  }

int GCD(int a,int b) {
      if(a==b){
		return (a);
	  }
	  if(a%b==0){
		return (b);
		}
	  if(b%a==0){
		  return (a);
	  }
	  //if above conditions are failed then below code will be execute
	  if(a>b){
		  return (GCD(a%b,b));
	  }
	  else{
		  return (GCD(b%a,a));
	  }
}

//By Navjot Singh Prince:)