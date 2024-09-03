#include<stdio.h>
#include<conio.h>

void main(){
	char ch;
	
	printf("\n Enter the character :- ");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("\n %c is the Uppercase",ch);
	}
	else{
		printf("\n %c is the Lowercase",ch);
	}
	getch();
}
