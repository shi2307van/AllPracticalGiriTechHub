6#include<stdio.h>
#include<conio.h>

void main(){
	
	char ch;
	
	printf("\n Enter the Character :-");
	scanf("%c",&ch);
	
	((ch >= 'a' && ch <= 'z') || (ch>='A' && ch <= 'Z')) ? printf("\n %c is the Alphabet !!!",ch) :
		(ch >= '0' && ch <= '9') ? printf("\n %c is the Digit !!!",ch) : printf("\n %c Special Character !!!!",ch) ;
		
		getch();
			
}
