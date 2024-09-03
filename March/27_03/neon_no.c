#include<stdio.h>
#include<conio.h>

void main(){
	int num,sqr,rem,sum=0,temp;
	
	printf("\n Enter the number :- ");
	scanf("%d",&num);
	temp = num;
	
	sqr = num * num;
	
	while(sqr>0){
		rem = sqr%10;
		sqr = sqr/10;
		sum = sum + rem;
	}
	if(sum==temp){
		printf("\n %d is the neon number !!",temp);
	}
	else{
		printf("\n %d is the not neon number !!",temp);
	}
}