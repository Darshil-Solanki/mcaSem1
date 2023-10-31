#include<stdio.h>
void fibonacci(int a){
	int first=0,second=1,temp,i;
	if(a==0)
		return ;
	else{
		for(i=1;i<=a;i++){
			if(i==1)
				printf("0 ");
			else if(i==2)
				printf("1 ");
			else{
				temp=first;
				first=second;
				second+=temp;
				printf("%d ",second);
			}
		}
	}
}
void main()
{
    int i;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&i);
	fibonacci(i);
    getch();
}