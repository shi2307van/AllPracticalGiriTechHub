#include<stdio.h>
#include<conio.h>

void main(){
	char ch;
	
	printf("\n Enter the Character :-");
	scanf("%c",&ch);
	
	if((ch>='A' || ch<='Z') && (ch>='a' || ch<='z')){
		printf("\n %c is the Alphabet !!!",ch);
	}
	else if(ch>='0' || ch<='9'){
		printf("\n %c is the Digit !!!",ch);
	}
	else{
		printf("\n %c is the special Character !!!",ch);
	}
	getch();
}
