#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2,ch,add,mul,div,sub;
	
	printf("\n Enter the value of num1 and num2 :-");
	scanf("%d%d",&num1,&num2);
	
	printf("\n 1.  Addition ");
	printf("\n 2.  Multiplication ");
	printf("\n 3.  Substraction ");
	printf("\n 4.  Division ");
	
	printf("\n Enter your choice :- ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1 :
			add = num1 + num2;
			printf("\n Sum of the %d and %d = %d",num1,num2,add);
			break;
			
		case 2 :
			mul = num1 * num2;
			printf("\n Multiplication of %d and %d = %d",num1,num2,mul);
			break;
			
		case 3:
			sub = num1 - num2;
			printf("\n Substraction of %d and %d = %d ",num1,num2,sub);
			break;
		
		case 4:
			div = num1/num2;
			printf("\n Division of %d and %d = %d ",num1,num2,div);
			break;
		
		default :
			printf("\n Enter invalid choice !!!!");
	}
}
