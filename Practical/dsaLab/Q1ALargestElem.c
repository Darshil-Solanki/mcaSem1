#include <stdio.h>
int main() {
    int arr[]={12,33,34,67,7,89,56},i,j,temp,n;
	clrscr();
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<7;i++){
    	for(j=1;j<=n-i-1;j++){
        	if(arr[j-1]>arr[j]){
            temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("Second Largest is : %d",arr[n-2]);
	getch()
    return 0;
}