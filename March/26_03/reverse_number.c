#include<stdio.h>
#include<conio.h>

void main(){
	int num,rev=0,rem,temp;

	printf("\n Enter the number :- ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num>0){
		rem = num%10;
		rev = rev*10 + rem;
		num = num/10;
	}
	printf("\n Reverse number of %d  is the :- %d",temp,rev);
	return 0;
}
