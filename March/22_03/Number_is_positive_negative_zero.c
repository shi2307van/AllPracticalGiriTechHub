#include<stdio.h>
#include<conio.h>


void main(){
	int num1,num2,ch;
	
	
	printf("\n 1.Check Number is positive , negative or zero. \n");
	printf("\n 2.Check Number is even or odd.\n");
	printf("\n 3.Write a c program find max number using 2 number.\n");
	
	printf("\n Enter your choice :- ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\n Enter the Number :-");
			scanf("%d",&num1);
			if(num1>0){
				printf("\n %d is Positive Number !!!",num1);
			}
			else if(num1<0){
				printf("\n %d is the negative Number !!!",num1);
			}
			else{
				printf("\n %d is the zero number !!!",num1);
			}
			break;
		
		case 2:
			printf("\n Enter the Number :- ");
			scanf("%d",&num1);
			if(num1%2==0){
				printf("\n %d is the even number !!!",num1);
			}
			else{
				printf("\n %d is the odd number !!!",num1);
			}
			break;
	
		case 3:
			printf("\n Enter the number 1 :- ");
			scanf("%d",&num1);
			printf("\n Enter the number 2 :- ");
			scanf("%d",&num2);
			
			if(num1>num2){
				printf("\n %d is the Maximum Number ",num1);
			}
			else{
				printf("\n %d is the maximum Number ",num2);
			}
			break;
			
		default:
			printf("\n Invalid Choice !!!!");
	}
}
