#include<stdio.h>
#include<conio.h>

void main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		char ch='A';
		for(j=1;j<=5;j++){
			if(j<=6-i){
				printf("%c",64+i);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
