#include<stdio.h>
#include<conio.h>

void main(){
	
	char ch;
	
	printf("\n Enetr the Character :-");
	scanf("%c",&ch);
	
	((ch>= 'a' && ch <='z')|| (ch>='A' && ch <='Z')) ? printf("\n %c is Alphabet !!",ch) : printf("\n %c is Not Alphabet!!!",ch);
	
	getch();
}
