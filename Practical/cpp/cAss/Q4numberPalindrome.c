#include<stdio.h>
int isPalindrome(int i){
    int rev=0;
	int temp=i;
	while(temp>0){
		rev=rev*10+temp%10;
		temp/=10;
	}
	return rev==i;
}
void main()
{
    int i;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&i);
    printf("Number Palindrome status is: %d",isPalindrome(i));
    getch();
}