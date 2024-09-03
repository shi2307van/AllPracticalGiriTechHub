#include<stdio.h>
#include<conio.h>

void main(){
	int i,j;
	char ch;
	for(i=0;i<5;i++){
		ch='A'+i;
		for(j=0;j<5;j++){
			printf("%c",ch++);
		}
		printf("\n");
	}
}
