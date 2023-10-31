#include<stdio.h>
#include<string.h>
int isPalindrome(char n[],int len){
    int j=len-1,i;
	int flag=1;
    for(i=0;i<len/2;i++){
		if(n[i]!=n[j]){
			flag=0;
			break;
		}
        j--;
    }
	return flag;
}
void main()
{
    char name[20];
    clrscr();
    printf("Enter a name:");
    gets(name);
    printf("String Palindrome status is: %d",isPalindrome(name,strlen(name)));
    getch();
}