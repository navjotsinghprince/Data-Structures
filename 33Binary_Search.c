#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void Binary_Search(int L[],int N,int ITEM);
//First parameter array 
// N=size of array
//Item which we want to search

int main() {
  int A[]={7,11,23,29,33,44,49,56,67,73,82,99,111,133,150};
  int ITEM=49;
  Binary_Search(A,15,ITEM);
  return 0;
  }

void Binary_Search(int L[],int N,int ITEM){
 int l=0; //lower index means array start index (0)
 int u=N-1; //Upper index means arary last index 14
 int m; //calculate array middle point
 
  while (l<=u)
  {
	m=(l+u)/2;
	if(ITEM==L[m]){
		printf("Search Successful at index %d Item Found",m);
		return;
	}
	else if(ITEM>L[m]){
		l=m+1; //go to right index
		
	}
	else{
		u=m-1;	//go to left index
	}
 }
 
 printf("Search Unsuccessfull ! Item Not Found");

}


/* 
Search for a particular item with a certain key resembles the search for a name a telephone directory

The approximate middle entry of the table is located and its key value is examined


If its value is too high,then the key value of the middle entry of the second half of table is examined and the procedure is repeated on the second half.

The procedure is continued till the desired key is found or the search interval becomes empty.


*/

