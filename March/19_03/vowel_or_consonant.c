#include<stdio.h>
#include<conio.h>

void main(){
	char ch;
	
	printf("\n Enter the Character :-");
	scanf("%c",&ch);
	
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("\n %c is the Vowel",ch);
	}
	else{
		printf("\n %c is the consonant",ch);
	}
	getch();
}
