#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a,b;
	int *first, *second;
	printf("Enter 2 Numbers i will add them using pointer");
	scanf("%d%d",&a,&b);
	first=&a;             //pointer first variable stores the location address of a 
    second=&b;            
				 

	//Unsigned Integer Format Specifier %u
	printf("Your value is :%u",*first+*second);
	getch();
	return 0;
}
//by Navjot Singh Prince:)