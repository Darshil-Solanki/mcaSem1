#include<stdio.h>
void swap(int *a,int *b){
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}
void main()
{
    int a,b;
    clrscr();
    printf("Enter a:");
    scanf("%d",&a);
	printf("Enter b:");
    scanf("%d",&b);
	printf("Before swapping: a:%d b:%d\n",a,b);
	swap(&a,&b);
	printf("After swapping: a:%d b:%d\n",a,b);
    getch();
}