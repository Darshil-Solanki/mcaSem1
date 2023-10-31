#include <stdio.h>
#include <string.h>
#define MAX 15
//This program will fail for invalid and longer(too much) expression!!!
int top=-1;
char stack[MAX];
int isEmpty(){
	return top == -1;
}
int isFull(){
	return top == MAX-1;
}
void push(char item){
	if(!isFull())
		stack[++top]=item;
}
char pop(){
	if(!isEmpty())
		return stack[top--];
}
char peek(){
	return stack[top];
}
int precedence(char item){
	 switch(item){
		case '+':
		case '-':
		  return 1;
		case '*':
		case '/':
		case '%':
		  return 2;
		case '^':
		  return 3;
	}
  return -1;
}
void infixToPostfix(char exp[]){
	char prefix[100];
	int i=0,j=-1;
	while(exp[i]!='\0'){
		if((exp[i]>='A' && exp[i]<='Z') || (exp[i]>='a' && exp[i]<='z'))
			prefix[++j]=exp[i];
		else if('('==exp[i])
				push(exp[i]);
		else if(')'==exp[i]){
			while(!isEmpty() && '('!=peek())
				prefix[++j]=pop();
			pop();		//remove left bracket
		}
		else{			// if an opertor
			while (!isEmpty() && precedence(exp[i]) <= precedence(peek()) ){
				if(precedence(peek())==precedence(exp[i])==3)
					break;
				prefix[++j] = pop();
			}
			push(exp[i]);
		}
		i++;
	}
	while(!isEmpty())
		prefix[++j] = pop();
	prefix[++j]='\0';
	strcpy(exp,prefix);
}
void main()
{
    int i;
    char exp[]="A^B*C/(D*E-F)";
	clrscr();
	printf("Infix Expression:\n");
	printf("%s\n",exp);
    infixToPostfix(exp);
	printf("Postfix Expression:\n");
    printf("%s\n",exp);
	getch();
}