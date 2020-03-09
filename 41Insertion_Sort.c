#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void InsertionSort(int [],int);

 int main() {
   int A[]={33,11,66,88,99,77,44,55,22,1};
   InsertionSort(A,10);
   int k;
  for(k=0; k<=9; k++){
	  printf("%d ",A[k]);
	
  }
   return 0;
   }


void InsertionSort(int A[],int N){
int i,j,temp;

  for(i=1; i<N; i++){
    temp=A[i];
    for(j=i-1; j>=0 && temp<A[j]; j--){
     A[j+1]=A[j];
     }
	  A[j+1]=temp;
  }

}

