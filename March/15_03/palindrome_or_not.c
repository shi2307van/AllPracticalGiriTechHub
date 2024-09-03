#include<stdio.h>
#include<conio.h>

void main(){
	int num,rem,rev=0,n;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	num = n;
	
	rem = num%10;
	num= num/10;
	rev = rev*10+rem;
	
	rem = num%10;
	num = num/10;
	rev = rev*10+rem;
	
	rem = num%10;
	num = num/10;
	rev = rev*10+rem;
	
	(n == rev) ? printf("\n number is the palindrome number !!") : printf("\n number is the not palindrome number !!");
	
	getch();
}
