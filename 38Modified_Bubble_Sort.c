#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void Bubble_Sort(int A[],int N);
//First parameter array 
// N=size of array


int main() {
  int A[]={34,15,29,8};
  int i;
  Bubble_Sort(A,4);

 for(i=0; i<=3; i++){
    printf("%d",A[i]);
	getch();
  }
 
  return 0;
  }


void Bubble_Sort(int A[],int N){
int round; //kitne round chalane hain array size se n-1
int i; 
int temp;
int flag;

for(round=1; round<=N-1; round++){
	flag=0;
    for(i=0; i<=N-1-round; i++){
     if(A[i]>A[i+1]){
	  flag=1;
      temp=A[i];
      A[i]=A[i+1];
      A[i+1]=temp;
   }
   if(flag==0){
    printf("Etne round lage sorting hone me:%d\n",round);
	return;
   }
 } //inner for loop
} //outer for loop

}
