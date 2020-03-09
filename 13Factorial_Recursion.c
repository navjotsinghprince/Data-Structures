#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
long int Factorial(int n);

int main() {
 int n;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  printf("Factorial of %d = %ld", n, Factorial(n));
  return 0;
  }

long int Factorial(int n) {
      if (n>=1){
          return (n*Factorial(n-1));  //Here is logic
        }
      else{
          return (1);
     }

}




