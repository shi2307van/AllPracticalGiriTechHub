#include<stdio.h>
#include<conio.h>

void main(){
	int cosPrice,selPrice;
	
	printf("\n Enter the Cost Price and Selling Price :-");
	scanf("%d%d",&cosPrice,&selPrice);
	
	if(selPrice>cosPrice){
		printf("\n Profit :- %d",selPrice-cosPrice);
	}
	else{
		printf("\n Loss :- %d",cosPrice-selPrice);
	}
	getch();
}
