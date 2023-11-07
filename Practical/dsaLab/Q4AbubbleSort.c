#include <stdio.h>
void bubbleSort(int arr[]){
	int i,j,temp;
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void main(){
	int i,arr[10];
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter array item: ");
		scanf("%d", &arr[i]);
	}
	bubbleSort(arr);
	printf("Sorted array is: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	getch();
}