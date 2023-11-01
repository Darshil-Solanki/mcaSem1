#include<stdio.h>
struct student{
	char name[30];
	int stid;
}*s;
void main()
{
    struct student s1;
    clrscr();
    printf("Enter name:");
    gets(s1.name);
	printf("Enter id:");
    scanf("%d", &s1.stid);
	s=&s1;
	printf("Name is :%s\n",s->name);
	printf("Stid is :%d\n",s->stid);
    getch();
}