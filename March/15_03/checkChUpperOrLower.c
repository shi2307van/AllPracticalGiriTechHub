#include<stdio.h>
#include<conio.h>

void main(){
	char ch;
	
	printf("Enter the character :- ");
	scanf("%c",&ch);
	
	(ch >= 'A' && ch <='Z') ? printf("\n %c is the Upper case !!",ch) : 
		(ch>='a' && ch<='z') ? printf("\n %c is the Lower Case !!!",ch):printf("\n Invalid Input!!!");
		
		getch();
}  
