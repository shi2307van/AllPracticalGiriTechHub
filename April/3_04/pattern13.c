#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k=1;
// question 2:
	char ch;
		for(i=1;i<=5;i++){
		ch = 'A';
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i){
					printf("%c",ch);
				   //printf("*");
					
					j>=5?ch--:ch++;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");	  
	}	
}
