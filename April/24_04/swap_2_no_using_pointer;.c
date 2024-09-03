#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2,temp;
	int *ptr1,*ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	printf("\n Enter the number 1 and 2:");
	scanf("%d%d",ptr1,ptr2);
	
	printf("\n Before swap Number 1 = %d and Number 2 = %d",*ptr1,*ptr2);
	
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	printf("\n After swap Number 1 = %d and Number 2 = %d",*ptr1,*ptr2);
}
