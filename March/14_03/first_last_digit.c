#include<stdio.h>
#include<conio.h>
#inclide<math.h>

void main(){
	int last,first,num,count;
	
	printf("\n Enter the 4 Digit Number :-");
	scanf("%d",&num);
	
	count = log10(num);
	
	first = num / pow(10,count);
	
	last = num%10;
	
	printf("\n First Digit Of the Number :- %d",first);
	
	printf("\n Last digit of the number :- %d",last);
	
	getch();
}
