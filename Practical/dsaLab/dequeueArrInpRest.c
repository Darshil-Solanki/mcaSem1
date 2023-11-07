#include <stdio.h>
#define MAX 10
//Input Restricted dequeue by darshil solanki
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
			rear=(rear+1)%MAX;
			queue[rear]=data;
		}
		printf("Inserted Successfully.\n");
	}
	else
		printf("Queue is Full(overflow)!!!\n");
}
int dequeueAtBeg(){
	if(!isEmpty()){
		int temp=front;
		printf("%d Deleted Successfully.\n",queue[front]);
		if(front==rear){
			front=rear=-1;
			return queue[temp];
		}
		else
			front=(front+1)%MAX;
			return queue[temp];
	}
	else{
		printf("Queue is Empty(underflow)!!!\n");
		return -1;
	}
}
int dequeueAtEnd(){
	if(!isEmpty()){
		int temp=rear;
		printf("%d Deleted Successfully.\n",queue[rear]);
		if(front==rear){
			front=rear=-1;
			return queue[temp];
		}
		else{
			rear=(rear-1)%MAX!=-1?rear-1:MAX-1;
			return queue[temp];
		}
	}
	else{
		printf("Queue is Empty(underflow)!!!\n");
		return -1;
	}
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
	int choice;
	while(1){
		printf("Enter your choice:\n");
		printf("1 : Check Queue it is empty or not.\n");
		printf("2 : Check Queue it is full or not.\n");
		printf("3 : Peek Element.\n");
		printf("4 : Enqueue Operation.\n");
		printf("5 : Dequeue from front Operation.\n");
		printf("6 : Dequeue from rear Operation.\n");
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
				enqueue();
				break;
			case 5:
				dequeueAtBeg();
				break;
			case 6:
				dequeueAtEnd();
				break;
			case 7:
				printQueue();
				break;
			case 8:
				exit(0);
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}