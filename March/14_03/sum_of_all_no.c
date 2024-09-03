#include<stdio.h>
#include<conio.h>

void main(){
	int num,sum=0,rem;
	
	printf("\n Enter the number :-");
	scanf("%d",&num);
	
	rem = num%10;
	num = num/10;
	sum = sum+rem;
	
	rem = num%10;
	num = num/10;
	sum = sum + rem;
	
	rem = num%10;
	num = num/10;
	sum = sum +rem;
	
	printf("\n Sum of all Number is %d",sum);
	
	getch();
	
}
