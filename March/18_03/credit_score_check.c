#include<stdio.h>
#include<conio.h>

void main(){
	int score;
	
	printf("\n Enter the Credit score :- ");
	scanf("%d",&score);
	
	score>750 ? printf("\n YES"):printf("\n NO");
	
	getch();
}
