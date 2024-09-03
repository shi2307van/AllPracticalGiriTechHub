#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k=1;

	
//question 1 :-

	for(i=1;i<=5;i++){
		

		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i && k){
					if(i%2==0){
						printf("*");
					}
					else{
						printf("#");
					}
					k=0;
			}
			
			else{
				printf(" ");
				k=1;
			}
		
		}
		printf("\n");
		  
	}
	
}
