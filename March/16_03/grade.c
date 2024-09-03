#include<stdio.h>
#include<conio.h>

void main(){
	char ch;
	
	printf("\n Enter the Grade :- ");
	scanf("%c",&ch);
	
	(ch == 'E') ? printf("\n You have chosen : Excellent"):
		(ch == 'v') ? printf("\n You have chosen : Very Good"):
			(ch == 'G') ? printf("\n You have chosen :Good"):
			   (ch == 'A') ? printf("\n You have chosen : Average"):
			   	(ch =='F') ?printf("\n You have chosen : Fail"):
			   						printf("\n Wrong input");
			   						
	getch();
			
}