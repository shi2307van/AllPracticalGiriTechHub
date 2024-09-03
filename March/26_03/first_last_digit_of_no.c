#include<stdio.h>
#include<conio.h>

void main(){
	int num,last,first;
	
	printf("\n Enter the number :- ");
	scanf("%d",&num);
	
	last = num % 10;
	
	printf("\n Last Digit of the number :- %d",last);
	
	first = num;
	
	while(first>=10){
		first = first /10;
	}
	printf("\n First Digit of the number :- %d",first);
}