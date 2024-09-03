#include<stdio.h>
#include<conio.h>

void main(){
	int mani_guards,total_guards;
	
	printf("\n Enter the manipulate at most guards :- ");
	scanf("%d",&mani_guards);
	
	printf("\n ENter the total guards :- ");
	scanf("%d",&total_guards);
	
	mani_guards < total_guards ? printf("\n No"):
		mani_guards == total_guards ? printf("\n Yes"):
			mani_guards > total_guards ? printf("\n Yes"):
				printf("\n Wrong Input");
				
	getch();
}
