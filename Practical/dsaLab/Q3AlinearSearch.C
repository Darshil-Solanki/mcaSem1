#include <stdio.h>
int i;
void linearSearch(int arr[]){
	int temp,flag=1;
	printf("Enter item to search:\n");
	scanf("%d",&temp);
	for(i=0;i<10;i++){
		if(arr[i]==temp){
			printf("\nfound at index: %d", i);
			flag=0;
		}
	}
	if(flag){
		printf("\nNot found!");
	}
	getch();
}
int main(){
	int arr[10];
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter arr item:\n");
		scanf("%d",&arr[i]);
	}
	linearSearch(arr);
	/* while (i<10 && arr[i]!=temp){
		i++;
	}
	if(i<10){
		printf("found at index: %d",i);
	}
	else{
		printf("Not found!");
	} */
	return 0;
}