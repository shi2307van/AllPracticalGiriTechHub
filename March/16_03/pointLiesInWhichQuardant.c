#include<stdio.h>
#include<conio.h>

void main(){
	int col1,col2;
	printf("\n Enter the value of col1 and col2 :- ");
	scanf("%d%d",&col1,&col2);
	
	(col1>0 && col2>0) ? printf("\n The cordinate point (%d , %d) lies in the First Quadrant.",col1,col2):
		(col1<0 && col2>0) ? printf("\n The cordinate point (%d , %d) lies in the Second Quadrant.",col1,col2):
			(col1<0 && col2<0) ? printf("\n The cordinate point (%d , %d) lies in the Third Quadrant.",col1,col2):
				(col1>0 && col2<0) ? printf("\n The cordinate point (%d ,%d) lies in the Fourth Quadrant.",col1,col2):
					(col1==0 && col2==0)?printf("\n The coordinate point (%d , %d) lies at the origin",col1,col2):
						printf("\n wrong Input");
	getch();
}