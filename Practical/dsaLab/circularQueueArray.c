#include <stdio.h>
#define MAX 15
int front=-1;
int rear=-1;
int queue[MAX];
int isEmpty(){
	if(front==-1){
		printf("Queue is Empty!!!\n");
		return 1;
	}
	else
		return 0;
}
int isFull(){
	if((rear+1)%MAX==front){
		printf("Queue is Full!!!\n");
		return 1;
	}
	else
		return 0;
}
int peek(){
	if(!isEmpty()){
		printf("Peek Element is : %d.\n",queue[front]);			
		return queue[front];
	}
	else
		return -1;
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
	else
		return -1;
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
		printf("4 : Enqueue Operation.\n");
		printf("5 : Dequeue Operation.\n");
		printf("6 : Print Queue.\n");
		printf("7 : Exit.\n");
		scanf("%d",&choice);
		clrscr();
		switch(choice){
			case 1:
				if(!isEmpty())
					printf("Queue is not Empty!!!\n");
				break;
			case 2:
				if(!isFull())
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
				break;
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}