#include <stdio.h>
#include <string.h>
void getStuffedBits(char bit[]){
    int c=0;
    int i;
    int j=0;
    char newBit[100];
    for(i=0;bit[i]!='\0';i++){
		if(bit[i]=='0'){
			newBit[j]='0';
			c=0;
			j++;
		}
		else{
			newBit[j]='1';
			c++;
			j++;
			if(c==5){
				newBit[j]='0';
				c=0;
				j++;
			}
		}
    }
    newBit[j]='\0';
    strcpy(bit,newBit);
}
void getDestuffedBits(char bit[]){
	int c=0,j=0;
	int i;
	int len=strlen(bit);
	char newBit[100];
	for(i=0;i<len;i++,j++){
		if(bit[i]=='0'){
			newBit[j]='0';
			c=0;
		}
		else{
			newBit[j]='1';
			c++;
			if(c==5){
				i++;
				c=0;
			}
		}
    }
    newBit[j]='\0';
    strcpy(bit,newBit);
}
int main()
{
    int i;
    char bits[]="010111110101111001011111";
	clrscr();
	printf("Bits Before stuffing:\n");
	printf("%s\n",bits);
    getStuffedBits(bits);
	printf("Bits after stuffing:\n");
    printf("%s\n",bits);
	getDestuffedBits(bits);
	printf("Bits after destuffing:\n");
	puts(bits);
	getch();
	return 0;
}