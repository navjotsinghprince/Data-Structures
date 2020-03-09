#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*DOUBLY LINKED LIST:-that contains one extra pointer as compare to the node of singly linked list
From any node we can traverse in both the direction*/

//Define Structure means hamra abstract data type 
struct node
{
	int info;
	struct node *prev,*next;
};

struct node* START=NULL; //main pointer 

void InsertAsFirstNode(){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	printf("Enter a Number");
	scanf("%d",&n->info);
	n->prev=NULL;
	n->next=NULL;
	printf("Inserted Successfully");
	if(START==NULL){
		START=n;  //ab main start pointer is struct type dynamic node block ko point krne lagega 
	}
	else{
	//agr phle se hi kyi sare node hue toh uski adjustment coding hai yeh

	START->prev=n; //means start jisko phle block ko point kr raha tha uske previous variable me null tha aur maine usme new block ka address de diya 

	n->next=START;  //means ye ki start me phle block ka address tha right,aur maine new node ke next block me uska address rakh dia 

	START=n; //means ye ki ab start new node ko point kr rha hai aur hmara new node ke previous block me toh null hai but next block me agle block ka address hai jo hmne isse just oper define kiya hai 
	}
}

void DeleteFirstNode(){
	struct node *r;
	if(START==NULL){
		printf("Opps ! Doubly list is empty ");
	}
	else{
		r=START;
		START=START->next;    //next node block ka address start me rakh dia
		START->prev=NULL;    //prevous me null rakh dia
		free(r);            //ab esko release kr dia
		printf("Deleted Successfully");
	}
}

void ViewNodeList(){
	struct node *t;
	if(START==NULL){
		printf("Can't View Coz List is Empty");
	}else{
		t=START;
		while(t->next!=NULL){    //t->next me toh agle block ka adress hai toh ye chlega
			printf("%d",t->info);
			t=t->next;           //remember ab  t me next block ka address aa gya hai
		}
	}
}

int menu(){
int choice;
printf("\n1. Create Node and Add value");
printf("\n2. Delete First Node");
printf("\n3. View List Nodes");
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
	 InsertAsFirstNode();
	break;
	
	case 2:
	DeleteFirstNode();
	break;

	case 3:
    ViewNodeList();
	break;

	case 4:
	exit(0);
	default:
	printf("invaild choice");
		break;
	}
	getch();
 }

}

//By Navjot Singh Prince