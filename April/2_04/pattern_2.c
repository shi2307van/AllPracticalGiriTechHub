#include<stdio.h>
#include<conio.h>

void main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5){
				if(j==1||j==5){
					printf(" # ");
				}
				else{
					printf(" * ");
				}
			}
			else if(i%2==0){
				if(j%2==0){
					printf(" # ");
				}
				else{
					printf(" * ");
				}
			}
			else if(i==3){
				if(j==3){
					printf(" # ");
				}
				else{
					printf(" * ");
				}
			}
		}
		printf("\n");
	}
}
