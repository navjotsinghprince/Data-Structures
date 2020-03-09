#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int Min(int A[],int K,int N);

 int main() {
   int A[]={33,11,66,88,99,77,44,55,22,1};
   int LOC,k,temp;

  for(k=0; k<=8; k++){
     LOC=Min(A,k,10);
	 temp=A[k];
	 A[k]=A[LOC];
	 A[LOC]=temp;
  }
  for(k=0;k<=9;k++){
	  printf("%d ",A[k]);
	
  }
 
   return 0;
   }


int Min(int A[],int K,int N){
int LOC=K;
int MIN=A[K];
int j;

    for(j=K+1; j<=N-1; j++){
      if(MIN>A[j]){
	     MIN=A[j];
	      LOC=j;
       }
    
   }
 return (LOC);
}

