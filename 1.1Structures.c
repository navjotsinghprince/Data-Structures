//Structure is a way of group of variables
//Strcutures is a collection of dissimilar elements
//defining structures means creating new data type
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct myinfo
{
 char name[20];
 int age;
 int rank;
};

struct myinfo input(){
		struct myinfo temp;   //create new data type
		fflush(stdin);
		printf("Enter Your name :");
		gets(temp.name);
		printf("\nEnter your age :");
		scanf("%d",&temp.age);
		printf("\nEnter your rank :");
		scanf("%d",&temp.rank);
		return temp;
	}
void display(struct myinfo data){
	printf("\n Your Name is: %s ",data.name);
		printf("\n Your Name is: %d",data.age);
			printf("\n Your Name is: %d",data.rank);
}
int main()
{
	struct myinfo mydata;
	mydata=input();
	display(mydata);
	getch();
	return 0;
//by Navjot Singh Prince:)	
}
