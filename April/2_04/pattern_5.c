#include<stdio.h>
#include<conio.h>

void main(){
	int i,j;
	
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			if(i<=3){
				if(j<=i){
					printf(" * ");
				}
			}
			else if(i>3){
				if(j<=i-3){
					printf(" * ");
				}
				else{
					printf("   ");
				}
			}
		}
		printf("\n");
	}
}
