#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//gcc 22Queue.c
//In Queue,The order in which the data arrives is important
//Queue is a line of items waiting to be served in sequential order
//A Queue is an ordered list in which insertions are done at one end(rear) and deletions are done at other end(front)//Working principal is First In First Out(FIFO)

//Define Structure
struct ArrayQueue{
	int front,rear; //rear means last index
	int capacity;
	int *array;
};


//Create Queue Function
struct ArrayQueue* CreateQueue(int cap){
struct ArrayQueue *Q;
Q=malloc(sizeof(struct ArrayQueue));
if(Q==NULL){
return (NULL);
}
Q->capacity=cap;
Q->front=-1;
Q->rear=-1;
Q->array=malloc(sizeof(int)*Q->capacity);
if(Q->array==NULL){
return NULL;
}
return (Q); //return dynamic block address
}

//Check Queue Empty or Not Function
int IsEmptyQueue(struct ArrayQueue *Q){
	//agr queue ke front me -1 hua toh sidda sa matlab hai queue empty hoga
 return(Q->front==-1); 
}

//Check Queue Is Full Or Not Function
int IsFullQueue(struct ArrayQueue *Q){
	//agr full hua toh 1 return hoga warna 0 return hoga
return((Q->rear+1)%Q->capacity==Q->front);
}

//Check Queue Size Function
int QueueSize(struct ArrayQueue *Q){
	return((Q->capacity-Q->front+Q->rear+1)%Q->capacity);
}


//Enter Insert Data in Queue
void InsertData(struct ArrayQueue *Q){
	int n;
 if(IsFullQueue(Q)){
 printf("Overflow! Queue Is full");
 }
 else{
	Q->rear=(Q->rear+1)%Q->capacity; //agr phli bar value insert kr rahe hain toh rear me 0 index jayega

	printf("\nEnter a number");
	scanf("%d",&n);
	Q->array[Q->rear]=n;
	if(Q->front==-1){
		Q->front=Q->rear; //yaha par bhi same agr phli bar value insert rahe toh front me first index yani ki 0 jayega
	}
 }
}

//Delete Queue Array Value
int DeleteValue(struct ArrayQueue *Q){
int data=-1;
if(IsEmptyQueue(Q)){
printf("Can't Deleted Queue Is Empty");
return (-1);
}
else{
	data=Q->array[Q->front];
	if(Q->front==Q->rear){
		//agr delete krne wali value hi phli 0 index par hui toh ye uske liye front aur rear me dowara -1 set hoga
		Q->front=Q->rear=-1;
	}
	else{
		Q->front=((Q->front+1)%Q->capacity);
	}
}
return data;
}


//Delete Parmanant Whole Queue
void DeleteQueue(struct ArrayQueue *Q){
 if(Q){
  
   if(Q->array)
   {
	free(Q->array);
   }
   free(Q);
   printf("Queue Successfully deleted");
 }
}



 int menu(){
  int choice;
 printf("\n1. Create Queue");
 printf("\n2. Check Queue Size");
 printf("\n3. Insert Data In Queue");
 printf("\n4. Delete Queue Array Value");
 printf("\n4. Delete Whole Queue");
 printf("\n5. Exit");
 printf("\nENTER YOUR CHOICE");

 scanf("%d",&choice);
 return (choice);
 }

 void main(){
	struct ArrayQueue *Q; //main pointer 
	int size,qsize,dvalue;
    while (1)
   {
	system("cls");
	switch (menu())
	{
	case 1:
		printf("Enter a Queue Size");
		scanf("%d",&size);
		Q=CreateQueue(size);
	break;
	       
	case 2:
	qsize=QueueSize(Q);
	 printf("Queue Size is: %d",qsize);
	break;

	case 3:
     InsertData(Q);
	break;

	case 4:
	dvalue=DeleteValue(Q);
	printf("deleted value is: %d",dvalue);
	break;

	case 5:
	DeleteQueue(Q);
	break;

	case 6:
	exit(0);
	break;

	default:
	printf("please enter a invaild choice");
		break;
	}
	getch();
 }

}

//By Navjot Singh Prince