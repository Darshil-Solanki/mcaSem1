#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct list *prev;
	struct list *next;
}*head;

void insInEmpty(int data){
	head = (struct list *)malloc(sizeof(struct list));
	if(head==NULL)
		printf("List is Full!!!(overflow)\n");
	else{
		head->data=data;
		head->prev=NULL;
		head->next=NULL;
		printf("Inserted successfully.\n");
	}
}
void insAtBeg(int data){
	if(isEmpty()){
		insInEmpty(data);
	}
	else{
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		if(temp==NULL)
			printf("List is Full!!!(overflow)\n");
		else{
			temp->data=data;
			temp->prev=NULL;
			temp->next=head;
			head->prev=temp;
			head=temp;
			printf("Inserted successfully.\n");
		}
	}
}
void insAtEnd(int data){
	if(isEmpty()){
		insInEmpty(data);
	}
	else{
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		struct list *tempData=(struct list *)malloc(sizeof(struct list));
		if(temp==NULL || tempData==NULL)
			printf("List is Full!!!(overflow)\n");
		else{
			temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			tempData->data=data;
			tempData->prev=temp;
			tempData->next=NULL;
			temp->next=tempData;
			printf("Inserted successfully.\n");
		}
	}
}
void insAtPos(int pos,int data){
	if(pos==1)
			insAtBeg(data);
	else{
		int c=1;
		struct list *tempData=(struct list *)malloc(sizeof(struct list));
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		struct list *prev=(struct list *)malloc(sizeof(struct list));
		if(temp==NULL || tempData==NULL || prev==NULL)
			printf("List is Full!!!(overflow)\n");
		else{
			tempData->data=data;
			temp=head;
			while(c!=pos){
				prev=temp;
				temp=temp->next;
				c++;
			}
			tempData->prev=prev;
			tempData->next=(temp!=NULL?temp:NULL);
			prev->next=tempData;
			temp->prev=tempData;
			printf("Inserted successfully.\n");
		}
	}
}

void delAtBeg(){
	if(isEmpty())
		printf("List is empty!!!\n");
	else{
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		if(head->next==NULL){
			printf("%d Deleted successfully\n",head->data);
			free(head);
			head=NULL;
		}
		else{
			temp=head;
			head=head->next;
			head->prev=NULL;
			printf("%d Deleted successfully\n",temp->data);
			free(temp);
			temp=NULL;
		}
	}
}

void delAtEnd(){
	if(isEmpty())
		printf("List is empty!!!\n");
	else{
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		struct list *prev=(struct list *)malloc(sizeof(struct list));
		if(head->next==NULL){
			printf("%d Deleted successfully\n",head->data);
			free(head);
			head=NULL;
		}
		else{
			temp=head;
			while(temp->next!=NULL){
				prev=temp;
				temp=temp->next;
			}
			prev->next=NULL;
			printf("%d Deleted successfully\n",temp->data);
			free(temp);
			temp=NULL;
		}
	}
}

void delAtPos(int pos){
	if(pos==1)
			delAtBeg();
	else{
		int c=1;
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		struct list *prev=(struct list *)malloc(sizeof(struct list));
		temp=head;
		while(c!=pos){
			prev=temp;
			temp=temp->next;
			c++;
		}
		if(temp->next==NULL)
			prev->next=NULL;
		else
			prev->next=temp->next;
			temp->next->prev=prev;
		printf("%d Deleted Successfully.\n",temp->data);
		free(temp);
		temp=NULL;

	}
}

int count(){
	int c=1;
	struct list *temp=(struct list *)malloc(sizeof(struct list));
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		c++;
	}
	return c;
}

void printList(){
	if(isEmpty())
		printf("List is empty!!!");
	else{
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		temp=head;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}

int isEmpty(){
	if(head==NULL)
		return 1;
	else
		return 0;
}

void main(){
	int choice,data,pos;
	while(1){
		printf("Enter your choice:\n");
		printf("1 : insert at beg\n");
		printf("2 : insert at end\n");
		printf("3 : insert at pos\n");
		printf("4 : delete at beg\n");
		printf("5 : delete at end\n");
		printf("6 : delete at pos\n");
		printf("7 : print list\n");
		printf("8 : Exit\n");
		scanf("%d",&choice);
		clrscr();
		switch(choice){
			case 1:
				printf("Enter data:");
				scanf("%d",&data);
				insAtBeg(data);
				break;
			case 2:
				printf("Enter data:");
				scanf("%d",&data);
				insAtEnd(data);
				break;
			case 3:
				printf("Enter Position:");
				scanf("%d",&pos);
				if(isEmpty() && pos>1)
					printf("List is Empty and Invalid Positon!!!\n");
				else if(pos<1 || pos>count()+1)
					printf("Invalid position!!!\n");
				else{
					printf("Enter data:");
					scanf("%d",&data);
					insAtPos(pos,data);
				}
				break;
			case 4:
				delAtBeg();
				break;
			case 5:
				delAtEnd();
				break;
			case 6:
				if(isEmpty())
					printf("List is Empty!!!\n");
				else{
					printf("Enter Position:");
					scanf("%d",&pos);
					if(pos<1 || pos>count())
						printf("Invalid position!!!\n");
					else 
						delAtPos(pos);
				}
				break;
			case 7:
				printList();
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