#include <stdio.h>
int maxMin(int arr[],int flag){
	int i,m;
	m=arr[0];
	for(i=0;i<10;i++){
		if(flag)
			if(arr[i]>m) m=arr[i];
		else
			if(arr[i]<m) m=arr[i];
	}
	return m;
}
void main(){
	int i;
	int arr[10];
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter a Number:");
		scanf("%d",&arr[i]);
	}
	printf("Maximum is :%d.\n",maxMin(arr,1));
	printf("Minimum is :%d.",maxMin(arr,0));
	getch();
}