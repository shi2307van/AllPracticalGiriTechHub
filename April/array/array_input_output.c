#include<stdio.h>
#include<conio.h>


void main(){
	int s[5],i;
	
	printf("\n Enter the array value :- ");
	for(i=0;i<5;i++){
		scanf("\n %d",&s[i]);
	}
	printf("Displaying interger :-");
	
	for(i=0;i<5;i++){
		printf("\n %d",s[i]);
	}
}
