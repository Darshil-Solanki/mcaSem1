#include <stdio.h>
#include <stdlib.h>

struct queue{
	int data;
	struct queue *next;
}*front,*rear;

int isEmpty(){
	return rear==NULL;
}
int peek(){
	if(!isEmpty()){
		printf("Peek Element is : %d.\n",front->data);			
		return front->data;
	}
	else{
		printf("Queue is Empty!!!\n");
		return -1;
	}
}
void enqueue(){
	struct queue *tempData=(struct queue *)malloc(sizeof(struct queue));
	if(tempData==NULL)
		printf("Dequeue is Full!!!(overflow)\n");
	else{
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		tempData->data=data;
		tempData->next=NULL;
		if(isEmpty())
			front=tempData;
		else
			rear->next=tempData;
		rear=tempData;
		printf("Inserted Successfully.\n");
	}
}
int dequeueAtBeg(){
	if(isEmpty()){
		printf("Queue is empty!!!\n");
		return -1;
	}
	else{
		int t=front->data;
		struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
		temp=front;
		if(temp->next==NULL){
			printf("%d Deleted successfully\n",front->data);
			front=rear=NULL;
		}
		else{
			front=front->next;
			printf("%d Deleted successfully\n",temp->data);
		}
		free(temp);
		temp=NULL;
		return t;
	}
}
int dequeueAtEnd(){
	if(isEmpty()){
		printf("Queue is empty!!!\n");
		return -1;
	}
	else{
		int t=rear->data;
		struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
		struct queue *prev=(struct queue *)malloc(sizeof(struct queue));
		temp=front;
		if(temp->next==NULL){
			printf("%d Deleted successfully\n",front->data);
			rear=NULL;
		}
		else{
			while(temp->next!=NULL){
				prev=temp;
				temp=temp->next;
			}
			prev->next=NULL;
			printf("%d Deleted successfully\n",temp->data);
			
		}
		free(temp);
		temp=NULL;
		return t;
	}
}
void printQueue(){
	if(isEmpty())
		printf("Queue is empty!!!");
	else{
		struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
		temp=front;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		};
	}
	printf("\n");
}
void main(){
	int choice=1,data,pos;
	while(choice!=8){
		printf("Enter your choice:\n");
		printf("1 : Check Queue it is empty or not.\n");
		printf("2 : Peek Element.\n");
		printf("3 : Enqueue Operation.\n");
		printf("4 : Dequeue at beginning Operation.\n");
		printf("5 : Dequeue at ending Operation.\n");
		printf("6 : Print Queue.\n");
		printf("7 : Exit.\n");
		scanf("%d",&choice);
		clrscr();
		switch(choice){
			case 1:
				if(isEmpty())
					printf("Queue is Empty!!!\n");
				else
					printf("Queue is not Empty!!!\n");
				break;
			case 2:		
				peek();
				break;
			case 3:
				enqueue();
				break;
			case 4:
				dequeueAtBeg();
				break;
			case 5:
				dequeueAtEnd();
				break;
			case 6:
				printQueue();
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}