#include<stdio.h>
#include<conio.h>

void main(){
	int age;
	
	printf("\n Enter your Age :- ");
	scanf("%d",&age);
	
	(age>18) ? printf("\n You are eligible for  casting your vote!!!") : printf("\n sorry your are not eligible !!!!");
	
	getch();
}