#include<stdio.h>
#include<conio.h>

void main(){
	int cel,fah;
	
	printf("Enetr the Temperature in Celsius :-");
	scanf("%d",&cel);
	
	fah = (cel*9/5) + 32;
	
	printf("Value of the Fahrenhit :- %d",fah);
	getch();
}
