#include<stdio.h>
#include<conio.h>

void main(){
	int a,b;
	
	printf("\n Enter the Value Of A and B :-");
	scanf("%d%d",&a,&b);
	
	a>b ? printf("\n %d is the Greater Number!!!",a) : printf("\n %d is the Greater Number!!!!",b);
	
	getch();
	
}
