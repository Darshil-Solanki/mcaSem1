#include <stdio.h>
#include <stdlib.h>
struct stack{
	int data;
	struct stack *prev;
}*top;
int isEmpty(){
	return top == NULL;
}
int peek(){
	if(!isEmpty()){
		printf("Peek Element is : %d.\n",top->data);			
		return top->data;
	}
	else{
		printf("Stack is Empty!!!\n");
		return -1;
	}
}
void push(){
	struct stack *temp=(struct stack *)malloc(sizeof(struct stack));
	if(temp==NULL)
		printf("Stack is Full(overflow)!!!\n");
	else{
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		temp->data=data;
		if(top==NULL)
			temp->prev=NULL;
		else
			temp->prev=top;
		top=temp;
		printf("Inserted Successfully.\n");
	}
}
int pop(){
	if(!isEmpty()){
		int t=top->data;
		struct stack *temp=(struct stack *)malloc(sizeof(struct stack));
		printf("%d Deleted Successfully.\n",top->data);
		temp=top;
		if(top->prev==NULL)
			top=NULL;
		else
			top=top->prev;
		free(temp);
		temp=NULL;
		return t;
	}
	else{
		printf("Stack is Empty(underflow)!!!\n");
		return -1;
	}
}
void printStack(){
	struct stack *temp=(struct stack *)malloc(sizeof(struct stack));
	if(!isEmpty()){
		temp=top;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->prev;
		}
	}
	else
		printf("Stack is Empty!!!");
	printf("\n");
}

void main(){
	int choice;
	while(1){
		printf("Enter your choice:\n");
		printf("1 : Check stack it is empty or not.\n");
		printf("2 : Peek Element.\n");
		printf("3 : Push Operation.\n");
		printf("4 : Pop Operation.\n");
		printf("5 : Print Stack.\n");
		printf("6 : Exit.\n");
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
				peek();
				break;
			case 3:
				push();
				break;
			case 4:
				pop();
				break;
			case 5:
				printStack();
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