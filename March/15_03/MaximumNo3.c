#include<stdio.h>
#include<conio.h>

void main(){
	
	int a,b,c,max;
	
	printf("\n Enter the 3 Number :-");
	scanf("%D%d%d",&a,&b,&c);
	
	max =(a>b)?((a>c)?a:c):((b>c)?b:c);
	
	printf("\n Maximum Number is %d",max);
	getch();
}
