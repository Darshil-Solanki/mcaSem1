#include<stdio.h>
#include<string.h>
void uppLow(char name[]){
	int i,ichar;
	char upper[50],lower[50];
	for(i=0;i<strlen(name);i++){
		ichar=(int)name[i];
		if(ichar>64 && ichar<91){
			upper[i]=name[i];
			lower[i]=(char)ichar+32;
		}
		else if(ichar>96 && ichar<123){
			lower[i]=name[i];
			upper[i]=(char)ichar-32;
		}
		else{
			lower[i]=upper[i]=name[i];
		}
	}
	upper[i]=lower[i]='\0';
	printf("Name in Uppercase: %s",upper);
	printf("Name in Lowercase: %s",lower);
}
void main()
{
    char name[20];
    clrscr();
    printf("Enter a name:");
    gets(name);
	uppLow(name);
    getch();
}