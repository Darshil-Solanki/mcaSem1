#include <stdio.h>
#include <stdlib.h>
struct queue{
	int data;
	struct queue *next;
}*front,*rear;
int isEmpty(){
	if(front==NULL){
		printf("Queue is Empty!!!\n");
		return 1;
	}
	else
		return 0;
}
int peek(){
	if(!isEmpty()){
		printf("Peek Element is : %d.\n",front->data);			
		return front->data;
	}
	else
		return -1;
}
void enqueue(){
	struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
	if(temp==NULL)
		printf("Queue is Full(overflow)!!!\n");
	else{
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		temp->data=data;
		if(rear==NULL){
			temp->next=temp;
			front=temp;
		}
		else{
			temp->next=front;
			rear->next=temp;
		}
		rear=temp;
		printf("Inserted Successfully.\n");
	}
}
int dequeue(){
	if(!isEmpty()){
		int t=front->data;
		struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
		printf("%d Deleted Successfully.\n",t);
		temp=front;
		if(front->next==front)
			front=rear=NULL;
		else{
			front=front->next;
			rear->next=front;
		}
		free(temp);
		temp=NULL;
		return t;
	}
	else
		return -1;
}
void printQueue(){
	struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
	if(!isEmpty()){
		temp=front;
		do{
			printf("%d ",temp->data);
			temp=temp->next;
		}while(temp!=front);
	}
	else
		printf("Queue is Empty!!!");
	printf("\n");
}
void main(){
	int data;
	int choice;
	while(1){
		printf("Enter your choice:\n");
		printf("1 : Check Queue it is empty or not.\n");
		printf("2 : Peek Element.\n");
		printf("3 : Enqueue Operation.\n");
		printf("4 : Dequeue Operation.\n");
		printf("5 : Print Queue.\n");
		printf("6 : Exit.\n");
		scanf("%d",&choice);
		clrscr();
		switch(choice){
			case 1:
				if(!isEmpty())
					printf("Queue is not Empty!!!\n");
				break;
			case 2:		
				peek();
				break;
			case 3:
				enqueue();
				break;
			case 4:
				dequeue();
				break;
			case 5:
				printQueue();
				break;
			case 6:
				exit(0);
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}