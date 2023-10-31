#include <stdio.h>
void sort(int arr[],int flag){
	int i,j,temp;
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if(flag){
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
			else{
				if(arr[j]<arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
}
void printArray(int arr[]){
	int i;
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void main(){
	int i;
	int arr[10];
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter a Number:");
		scanf("%d",&arr[i]);
	}
	sort(arr,1)//sort in ascending 
	printf("Array in ascending:\n");
	printArray(arr);
	sort(arr,0);//sort in descending 
	printf("Array in descending:\n");
	printArray(arr);
	getch();
}