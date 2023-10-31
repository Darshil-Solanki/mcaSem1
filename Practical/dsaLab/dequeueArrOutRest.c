#include <stdio.h>
#define MAX 10
//Output Restricted dequeue by darshil solanki
int front=-1;
int rear=-1;
int queue[MAX];
int isEmpty(){
	return front == -1;
}
int isFull(){
	return (rear+1)%MAX==front;
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
int dequeue(){
	if(!isEmpty()){
		int temp=front;
		printf("%d Deleted Successfully.\n",queue[front]);
		if(front==rear){
			front=rear=-1;
			return queue[temp];
		}
		else{
			front=(front+1)%MAX;
			return queue[temp];
		}
	}
	else{
		printf("Queue is Empty(underflow)!!!\n");
		return -1;
	}
}
void enqueueAtBeg(){
	if(!isFull()){
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		if(isEmpty()){
			rear++;
			queue[++front]=data;
		}
		else{
			front=(front-1)%MAX!=-1?front-1:MAX-1;
			queue[front]=data;
		}
		printf("Inserted Successfully.\n");
	}
	else
		printf("Queue is Full(overflow)!!!\n");
}
void enqueueAtEnd(){
	if(!isFull()){
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		if(isEmpty()){
			front++;
			queue[++rear]=data;
		}
		else{
			rear=(rear+1)%MAX;
			queue[rear]=data;
		}
		printf("Inserted Successfully.\n");
	}
	else
		printf("Queue is Full(overflow)!!!\n");
}
void printQueue(){
	if(!isEmpty()){
		int temp=front;
		while(temp!=rear){
			printf("%d ",queue[temp]);
			temp=(temp+1)%MAX;
		}
		printf("%d ",queue[temp]);
	}
	else
		printf("Queue is Empty!!!\n");
	printf("\n");
}
void main(){
	int data;
	int choice=0;
	while(choice!=8){
		printf("Enter your choice:\n");
		printf("1 : Check Queue it is empty or not.\n");
		printf("2 : Check Queue it is full or not.\n");
		printf("3 : Peek Element.\n");
		printf("4 : Enqueue from front Operation.\n");
		printf("5 : Enqueue from rear Operation.\n");
		printf("6 : Dequeue Operation.\n");
		printf("7 : Print Queue.\n");
		printf("8 : Exit.\n");
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
				enqueueAtBeg();
				break;
			case 5:
				enqueueAtEnd();
				break;
			case 6:
				dequeue();
				break;
			case 7:
				printQueue();
				break;
			case 8:
				exit(0);
				break;
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}