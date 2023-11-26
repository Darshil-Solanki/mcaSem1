#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct list *next;
}*head;

int isEmpty(){
	return head==NULL;
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

void insert() {
    struct list *current=(struct list *)malloc(sizeof(struct list));
    struct list *newNode=(struct list *)malloc(sizeof(struct list) );
	if(newNode==NULL)
		printf("Overflow");
	else{
		int data;
		printf("Enter data: ");
		scanf("%d",&data);
		newNode->data=data;
		// Special case for the head of the list
		if (head == NULL || head->data >= newNode->data) {
			newNode->next = head;
			head = newNode;
		}
		else {
			// Locate the node before the point of insertion
			current = head;
			while (current->next != NULL && current->next->data < newNode->data) {
				current = current->next;
			}
			newNode->next = current->next;
			current->next = newNode;
		}
	}
}
void delete(){
	if(isEmpty())
		printf("List is empty!!!\n");
	else{
		struct list *temp=(struct list *)malloc(sizeof(struct list));
		struct list *prev=(struct list *)malloc(sizeof(struct list));
		int data;
		printf("Enter data: ");
		scanf("%d", &data);
		temp=head;
		prev=NULL;
		while(temp!=NULL && temp->data!=data){
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL)
			printf("Not found!!!\n");
		else{
			if(prev==NULL)
				head=temp->next;
			else
				prev->next=temp->next;
			printf("%d Deleted successfully\n",data);
			free(temp);
		}
	}
}

void main(){
	int choice;
	while(1){
		printf("Enter your choice:\n");
		printf("1 : insert\n");
		printf("2 : delete\n");
		printf("3 : print list\n");
		printf("4 : Exit\n");
		scanf("%d",&choice);
		clrscr();
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				printList();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice!!!\n");
				getch();
				exit(0);
		}
	}
}
