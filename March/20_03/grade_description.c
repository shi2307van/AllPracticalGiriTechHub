#include<stdio.h>
#include<conio.h>

void main(){
	char ch;
	
	printf("\n Enter a grade :- ");
	scanf("%c",&ch);
	
	if(ch=='E'){
		printf("\n Excellent");
	}
	else if(ch=='V'){
		printf("\n Very Good");
	}
	else if(ch=='G'){
		printf("\n Good");
	}
	else if(ch=='A'){
		printf("\n Average");
	}
	
	else if(ch=='F'){
		printf("\n Fail");
	}
	else{
		printf("\n Invalid input!!");
	}
	getch();
}
