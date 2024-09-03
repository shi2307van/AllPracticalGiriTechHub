
#include<stdio.h>
#include<conio.h>

void main(){
	int m;
	
	printf("\n Enter the value of M :-");
	scanf("%d",&m);
	
	(m > 0) ? printf("\n N = 1") :
		(m == 0) ? printf("\n N = 0") :
			(m < 0) ? printf("\n N = -1 "):
					printf("\n Wrong input");
	getch();
}
