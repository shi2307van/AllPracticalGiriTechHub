#include<stdio.h>
#include<conio.h>

void main(){
	int num,rem,rev=0,temp=0;
	
	printf("\n Enter the number :-");
	scanf("%d",&num);
	temp = num;
	while(num>0){
		rem = num%10;
		num = num/10;
		rev = rev*10+rem;
	}
	if(temp == rev){
		printf("\n %d is the palindrome Number ",temp);
	}
	else{
		printf("\n %d is not palindrome Number ",temp);
	}
	
	
}