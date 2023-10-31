#include <stdio.h>
#include <math.h>
int isPrime(int a){
	int j;
	for (j = ceil( sqrt(a) ) ; j > 1; j--) {
      if (a != j && a % j == 0) break;
    }
	return j==1;
}
void main(){
	int i;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&i);
	printf("Prime status of num: %d\n",isPrime(i));
	getch();
}