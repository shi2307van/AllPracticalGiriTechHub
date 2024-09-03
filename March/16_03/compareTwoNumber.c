#include<stdio.h>
#include<conio.h>

void  main(){
	int a,b;
	
	printf("\n Enter the value of A and B :-");
	scanf("%d%d",&a,&b);
	
	(a==b) ? printf("\n A and B are Equal !!") : printf("\n A and B are not equal !!!");
	
	getch();
}