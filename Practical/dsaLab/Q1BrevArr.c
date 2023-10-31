#include <stdio.h>
void arrrev(int arr[],int revarr[],int n){
    int i,j;
    j=0;
    for(i=n-1;i>=0;i--){
        revarr[j]=arr[i];
        j++;
    }
}
int main() {
    int arr[]={12,33,34,67,7,89,56},i,n;
	clrscr();
    n=sizeof(arr)/sizeof(arr[0]);
    int revarr[n];
    arrrev(arr,revarr,n);
    for(i=0;i<n;i++){
        printf("%d ",revarr[i]);
    }
	getch();
    return 0;
}