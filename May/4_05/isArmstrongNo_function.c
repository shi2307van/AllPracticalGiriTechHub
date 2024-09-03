#include<stdio.h>
#include<conio.h>

void main(){
	int isArmstrongNo(int);
	
	int no,arms;
	
	printf("\n Enter the number :- ");
	scanf("%d",&no);
	
	arms = isArmstrongNo(no);
	
	if(arms==no)
	{
		printf("Number is armstrong number !!!");
	}
	else
	{
		printf("Number is not armstrong number!!!");
	}
}

int isArmstrongNo(int x)
{
	int rem,sum;
	
	while(x>0){
		rem = x%10;
		x = x/10;
		sum = sum+rem*rem*rem;
	}
	return sum;
}
