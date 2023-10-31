#include<stdio.h>
void strcpy(char des[],char source[]){
	int i=0;
	while(source[i]!='\0'){
		des[i]=source[i];
		i++;
	}
	des[i]='\0';
}
void main()
{
    char name[20],copyName[20];
    clrscr();
    printf("Enter a name:");
    gets(name);
	strcpy(copyName,name);
	printf("Copied name: %s",copyName);
    getch();
}