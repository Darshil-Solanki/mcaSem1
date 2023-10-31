#include <stdio.h>
	int i;
void binarySearch(int arr[],int low,int high){
	int mid,temp;
	printf("Enter item to search:\n");
	scanf("%d",&temp);
	while(low<=high){
		mid=(low+high)/2;
		if(temp==arr[mid]){
			printf("found at index %d",mid);
			return ;
		}
		else if(temp<arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	printf("Not found!!!");
}
int main(){
	int arr[10];
	clrscr();
	printf("Enter array item only in sorted manner!!!\n");
	for(i=0;i<10;i++){
		printf("Enter an item:\n");
		scanf("%d",&arr[i]);
	}
	binarySearch(arr,0,9);
	getch();
	return 0;
}