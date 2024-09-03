#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2;
	int *ptr1,*ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	printf("\n Enter the number1 and number2 :- ");
	scanf("%d%d",ptr1,ptr2);
	
	printf("\n Number 1 = %d and Number 2 = %d",*ptr1,*ptr2);
	
	*ptr1 = (*ptr1)+(*ptr2);
	*ptr2 = (*ptr1)-(*ptr2);
	*ptr1 = (*ptr1)-(*ptr2);
	
	printf("\n Number 1 = %d and Number 2 = %d",*ptr1,*ptr2);
	
	
}
