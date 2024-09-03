#include<stdio.h>
#include<conio.h>

void main(){
	
	char ch;
	
	printf("\n Enter the Character :- ");
	scanf("%c",&ch);
	

	((ch == 'a' || ch=='e'||ch=='o'||ch=='u'||ch=='i') || (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) ? printf("\n %c is the vowel !!",ch) : printf("\n %c is the consonant!!!",ch);
	
	getch();
}
