#include<stdio.h>
int factorial(int a){
	if(a<0)
		printf("Negative Number!!!\n");
		return -1;
	else if(a==0 || a==1)
		return 1;
	else
		return a*factorial(a-1);
}
void main()
{
    int i;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&i);
	printf("Factorial of %d is: %d",i,factorial(i));
    getch();
}