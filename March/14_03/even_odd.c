#include<stdio.h>
#include<conio.h>


void main(){
	int num;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	num%2==0?printf("\n Number is Even"):printf("\n Number is Odd");
	
	getch();
}
