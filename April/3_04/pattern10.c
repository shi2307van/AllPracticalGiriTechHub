#include<stdio.h>
#include<conio.h>

void main(){
	int i,j;
	
	for(i=0;i<5;i++){
		char ch='A';
		for(j=0;j<5;j++){
			if(i<=j){
				printf("%c",ch+j);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
