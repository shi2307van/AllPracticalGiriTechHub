#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	(num%5==0 && num%11 ==0) ? printf("\n Number is divisible By 5 and 11") : printf("\n Number is not divisible by 5 and 11");
	
	getch();
}
