#include<stdio.h>
#include<conio.h>

void main(){
	char ch;
	
	printf("\n Enter the Character :-");
	scanf("%c",&ch);
	
	if(ch>=97 && ch<=122 || ch>=65 && ch<=90){
		printf("\n %c is Alphabet!!",ch);
	}
	else{
		printf("\n %c is Not Alphabet",ch);
	}
	getch();
	
}
