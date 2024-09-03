#include<stdio.h>
#include<conio.h>

void main(){
	
	int cosP,selP;
	
	printf("\n Enter the cost Price :-");
	scanf("%d",&cosP);
	
	printf("\n Enter the Selling Price :-");
	scanf("%d",&selP);
	
	selP>cosP ? printf("\n Profit") : printf("\n Loss");
	
	getch();
	
	
}

