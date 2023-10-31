#include<stdio.h>
int strlen(char n[]){
    int c=0;
    while (n[c]!='\0'){
        c++;
    }
    return c;
}
void main()
{
    char name[20];
	clrscr();
    printf("Enter a name:");
    gets(name);
    printf("length of your name is: %d",strlen(name));
	getch();
}