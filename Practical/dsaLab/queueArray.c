#include <stdio.h>
#define MAX 15
int front=-1;
int rear=-1;
int queue[MAX];
int isEmpty(){
	return front == -1;
}
int isFull(){
	return rear==(MAX-1);
}
int peek(){
	if(!isEmpty()){
		printf("Peek Element is : %d.\n",queue[front]);			
		return queue[front];
	}
	else{
		printf("Queue is Empty!!!\n");
		return -1;
	}
}
void enqueue(){
	if(!isFull()){
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		if(isEmpty()){
			front++;
			queue[++rear]=data;
		}
		else{
			queue[++rear]=data;
		}
		printf("Inserted Successfully.\n");
	}
	else
		printf("Queue is Full!!!\n");
}
int dequeue(){
	if(!isEmpty()){
		printf("%d Deleted Successfully.\n",queue[front]);
		if(front==rear){
			int temp=front;
			front=rear=-1;
			return queue[temp];
		}
		else
			return queue[front++];
	}
	else{
		printf("Queue is Empty!!!\n");
		return -1;
	}
}
void printQueue(){
	if(!isEmpty()){
		int temp=front;
		for(;temp<=rear;temp++){
			printf("%d ",queue[temp]);
		}
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
		printf("2 : Check Queue it is full or not.\n");
		printf("3 : Peek Element.\n");
		printf("4 : Enqueue Operation.\n");
		printf("5 : Dequeue Operation.\n");
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
				if(isFull())
					printf("Queue is Full!!!\n");
				else
					printf("Queue is not Full!!!\n");
				break;
			case 3:		
				peek();
				break;
			case 4:
				enqueue();
				break;
			case 5:
				dequeue();
				break;
			case 6:
				printQueue();
				break;
			case 7:
				exit(0);
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}