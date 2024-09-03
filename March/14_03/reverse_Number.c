#include<stdio.h>
#include<conio.h>


void main(){
	int num,rev=0 ,rem;
	
	printf("\n Enter the number :-");
	scanf("%d",&num);
	
	rem = num%10;
	num = num/10;
	rev = rev * 10 + rem;
	
	rem = num %10;
	num= num/10;
	rev = rev*10+rem;
	
	rem  = num%10;
	num = num/10;
	rev=rev*10+rem;
	
	printf("Reverse value of the number :- %d",rev);
	
	getch();
	
	
}
