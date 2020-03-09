#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void Sequential_Search(int L[],int N,int ITEM);
//First parameter is:  array 
// N=size of array
//Item which we want to search

int main() {
  int A[]={54,22,15,78,100,66,34,78,90,100,56,64,58,80,43};
  Sequential_Search(A,15,64);
  return 0;
  }

void Sequential_Search(int L[],int N,int ITEM){
 int flag=1,k,i;
 for (i=0; i<N-1; i++){
  if (L[i]==ITEM){
   flag=0;
   printf("\n Search Successfull Index Is %d:", i);
   printf("\n Item is  %d:", ITEM);
   }
 }
 if(flag==1){
	 printf("Search UnSuccessful ! Item not found");
 }
 

}


/* 
In This searching technique,we start at the begining of a list or table and search for the disired record by examining each subsequent record until either the desired record is found or the list os exhausted.

This is also known as sequential search..

PERFORMANCE:-
Number of comparison made in searching a record in a search table determines the efficiency of the technique.
On an avarage the number of comparisons will be(n+1)/2
The wrost case efficiency of this algorithm is O(n).
*/

