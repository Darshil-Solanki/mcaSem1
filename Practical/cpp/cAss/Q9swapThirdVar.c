#include<stdio.h>
void main()
{
    int a,b,t;
    clrscr();
    printf("Enter a:");
    scanf("%d",&a);
	printf("Enter b:");
    scanf("%d",&b);
	printf("Before swapping: a:%d b:%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("After swapping: a:%d b:%d\n",a,b);
    getch();
}