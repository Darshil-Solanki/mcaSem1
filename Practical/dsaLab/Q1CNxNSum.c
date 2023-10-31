#include<stdio.h>

void main()
{
    int n,sum=0;
	clrscr();
    printf("Enter n :");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=i-j;
            sum+=i-j;
        }
    }
    printf("\nSum of the array is : %d",sum);
	getch();
}