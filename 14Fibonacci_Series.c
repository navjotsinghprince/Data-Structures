#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int Fib(int);

int main() {
 int n,i;
  printf("Enter a positive integer For Fibonacci Series: ");
  scanf("%d",&n);
  for (i=1; i<=n; i++){
   printf("%d ",Fib(i)); //call function according to numbers
  }
  getch();
  return 0;
  }

int Fib(int n) {
      if (n==1 || n==2){
          return (1);
        }
      else{
        return (Fib(n-1)+Fib(n-2)); //Use Recursion logic
    }
}

//By Navjot Singh Prince:)


