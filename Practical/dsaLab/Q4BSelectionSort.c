#include <stdio.h>
void selectionSort(int arr[]){
	int i,j,min,temp;
	for(i=0;i<9;i++){
		min=i;
		for(j=i+1;j<10;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
}
void main(){
	int i,arr[10];
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter array item: ");
		scanf("%d",arr[i]);
	}
	selectionSort(arr);
	printf("Sorted array is: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	getch();
}