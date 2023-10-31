#include<stdio.h>
void fun1(){
	printf("fun1: NO parameter no return value.\n");
}
int fun2(){
	printf("fun2: NO parameter with return value 2.\n");
	return 2;
}
void fun3(int a){
	printf("fun3: parameter %d with No return value.\n",a);
}
int fun4(int a){
	printf("fun4: parameter %d with return value 4.\n",a);
	return 4;
}
void main()
{
    int a,temp;
    clrscr();
    printf("Enter a:");
    scanf("%d",&a);
	fun1();
	temp=fun2();
	printf("fun2 returned value to main is: %d.\n",temp);
	fun3(a);
	temp=fun4(a);
	printf("fun4 returned value to main is: %d.\n",temp);
    getch();
}