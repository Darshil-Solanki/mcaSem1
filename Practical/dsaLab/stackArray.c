#include <stdio.h>
#define MAX 15
int top=-1;
int stack[MAX];
int isEmpty(){
	return top == -1;
}
int isFull(){
	return top == MAX-1;
}
int peek(){
	if(!isEmpty()){
		printf("Peek Element is : %d.\n",stack[top]);			
		return stack[top];
	}
	else{
		printf("Stack is Empty!!!\n");
		return -1;
	}
}
void push(){
	if(!isFull()){
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		stack[++top]=data;
		printf("Inserted Successfully.\n");
	}
	else
		printf("Stack is Full(overflow)!!!\n");
}
int pop(){
	if(!isEmpty()){
		printf("%d Deleted Successfully.\n",stack[top]);
		return stack[top--];
	}
	else{
		printf("Stack is Empty(underflow)!!!\n");
		return -1;
	}
}
void printStack(){
	if(!isEmpty()){
		int temp=top;
		for(;temp>=0;temp--){
			printf("%d ",stack[temp]);
		}
	}
	else
		printf("Stack is Empty!!!");
	printf("\n");
}
void main(){
	int data;
	int choice;
	while(1){
		printf("Enter your choice:\n");
		printf("1 : Check stack it is empty or not.\n");
		printf("2 : Check stack it is full or not.\n");
		printf("3 : Peek Element.\n");
		printf("4 : Push Operation.\n");
		printf("5 : Pop Operation.\n");
		printf("6 : Print Stack.\n");
		printf("7 : Exit.\n");
		scanf("%d",&choice);
		clrscr();
		switch(choice){
			case 1:
				if(isEmpty())
					printf("Stack is Empty!!!\n");
				else
					printf("Stack is not Empty!!!\n");
				break;
			case 2:
				if(isFull())
					printf("Stack is Full!!!\n");
				else
					printf("Stack is not Full!!!\n");
				break;
			case 3:		
				peek();
				break;
			case 4:
				push();
				break;
			case 5:
				pop();
				break;
			case 6:
				printStack();
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