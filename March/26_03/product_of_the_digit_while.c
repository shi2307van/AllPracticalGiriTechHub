#include<stdio.h>
#include<conio.h>

void main(){
	int num,pro=1,rem;
	
	printf("\n Enter the digit :- ");
	scanf("%d",&num);
	
	while(num >0 ){
		rem = num%10;
		pro = pro * rem;
		num = num/10;
	}
	printf("\n Product of the digit :- %d ",pro);
	return 0;
	
}
