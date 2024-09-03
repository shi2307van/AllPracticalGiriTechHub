#include<stdio.h>
#include<conio.h>

void main(){
	int sum=0,n,last,first;
	
	printf("\n Enter the Number :- ");
	scanf("%d",&n);
	
	last = n%10;
	
	first = n;
	
	while(first>=10){
		first = first /10;
	}
	
	sum = last + first ;
	
	printf("\n Sum of the first and last digit of the number :- %d",sum);
}