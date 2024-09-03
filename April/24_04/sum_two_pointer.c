#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2,sum;
	int *ptr1,*ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	printf("\n Enter the value of num1 and num2");
	scanf("%d%d",ptr1,ptr2);
	
	sum = *ptr1 + *ptr2;
	
	printf("Sum of %d and %d = %d",*ptr1,*ptr2,sum);
	
}
