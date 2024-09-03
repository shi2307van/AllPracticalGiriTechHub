#include<stdio.h>
#include<conio.h>

void main(){
	int num,sum=0,rem;
	
	printf("\n Enter the digit :- ");
	scanf("%d",&num);
	
	while(num>0){
		rem = num%10;
		sum = sum + rem;
		num = num/10;
	}
	printf("\n Sum of the digit :- %d ",sum);
	return 0;
}
