#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//19Linked_List_Program.c
struct node{
	int info;            //data save krane k liye
	struct node *link;  //esi type ke next node da address rakhne k liye
};

struct node *START=NULL; //main pointer

//Create Node Size Memory Block Function
 struct node* CreateNode(){
 struct node *n;
 n=(struct node *)malloc(sizeof(struct node)); 
 return (n); //return address
 }

 //Insert Node Function
 void InsertNode(){
 struct node *temp,*t;     //t pointer insertion k liye below 
 temp=CreateNode();       //jo create node function address return krega
 printf("Enter a Number Data"); 
 scanf("%d",&temp->info);
 printf("Inserted Successfully");
 temp->link=NULL;
 if(START==NULL){
 //temp jis node ko point kr raha hai uska address start ma a jayega
 START=temp; //main pointer ko node addresss diya taki wo esko access kr ske
  }else{
	//agar list me phle se kyi sare nodes hue toh uske last me new node add krne k liye like Insertion at the end 
	t=START;
	while(t->link!=NULL){
		t=t->link; //t ke jo node link me tha wo bar bar jayega t me address change hota rahega
	}
	t->link=temp;
  }
 }

//Deletion Of First Node
void DeleteNode(){
	struct node *r;
	if(START==NULL){
    printf("List is empty");
	}else{
		r=START;             //ye delete krne k liye
		START=START->link; //ye next node ke address rakhne k liye
		free(r);          //memory realase
		printf("Deleted Successfully");
	}
}

//Traversing of Nodes//Print values
void ViewList(){
	struct node *t;
	if(START==NULL){
		printf("list is empty");
	}else{
		t=START;
		while(t!=NULL){
			printf("%d",t->info);
			t=t->link;  //means next block ka address
		}

	}
}

int menu(){
int choice;
printf("\n1. Add Value To List");
printf("\n2. Delete First Value");
printf("\n3. View List");
printf("\n4. Exit");
printf("\nENTER YOUR CHOICE");
scanf("%d",&choice);
return (choice);
}

void main(){
while (1)
{
	system("cls");
	switch (menu())
	{
	case 1:
		InsertNode();
	break;
	
	case 2:
	DeleteNode();
	break;

	case 3:
	ViewList();
	break;

	case 4:
	exit(0);
	default:
	printf("please enter a invaild choice");
		break;
	}
	getch();
 }

}

//By Navjot Singh Prince