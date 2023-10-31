#include <stdio.h>
void insertionSort(int arr[]){
	int i,j,key;
	for(i=1;i<9;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void main(){
	int i,arr[10];
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter array item: ");
		scanf("%d",arr[i]);
	}
	insertionSort(arr);
	printf("Sorted array is: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	getch();
}