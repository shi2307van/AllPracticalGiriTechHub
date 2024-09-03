#include<stdio.h>
#include<conio.h>

void main(){
	float num1,num2;
	float *ptr1,*ptr2;
	
	float sum,diff,mul,div;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	
	printf("\n Enter any two real number :- ");
	scanf("%f%f",&num1,&num2);
	
	
	sum = (*ptr1) + (*ptr2);
	diff= (*ptr1) - (*ptr2);
	mul = (*ptr1) * (*ptr2);
	div = (*ptr1) / (*ptr2);
	
	printf("\Sum = %.2f\n",sum);
	printf("\n Difference = %.2f\n",diff);
	printf("\n Product = %.2f\n",mul);
	printf("\n Division = %.2f\n",div);
}
