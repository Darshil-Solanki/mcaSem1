#include <stdio.h>
struct queue{
	int data;
	struct queue *next;
}*front,*rear;
int isEmpty(){
	return front == NULL;
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
	struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
	if(temp==NULL)
		printf("Queue is Full(overflow)!!!\n");
	else{
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		temp->data=data;
		temp->next=NULL;
		if(isEmpty())
			front=rear=temp;
		else
			rear->next=temp;
		rear=temp;
		printf("Inserted Successfully.\n");
	}
}
int dequeue(){
	if(!isEmpty()){
		int t=front->data;
		struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
		printf("%d Deleted Successfully.\n",front->data);
		temp=front;
		if(front->next==NULL)
			front=NULL;
		else
			front=front->next;
		free(temp);
		temp=NULL;
		return t;
	}
	else{
		printf("Queue is Empty(underflow)!!!\n");
		return -1;
	}
}
void printQueue(){
	struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
	if(!isEmpty()){
		temp=front;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
	else
		printf("Queue is Empty!!!");
	printf("\n");
}
void main(){
	int data;
	int choice=0;
	while(choice!=8){
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
				dequeue();
				break;
			case 5:
				printQueue();
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}