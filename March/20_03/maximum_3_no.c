#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2,num3;
	
	printf("\n Enter the 3 Number :-");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if((num1>num2) && (num1>num3)){
		printf("\n %d is the grater number!!1",num1);
	}
	else if((num2>num1) && (num2>num3)){
		printf("\n %d is the grater number!!!",num2);
	}
	else{
		printf("\n %d is the grater number!!!",num3);
	}
	getch();
}
