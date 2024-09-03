#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2;
	
	printf("\n enter the Num1 and Num2 :-");
	scanf("%d%d",&num1,&num2);
	
	if(num1 > num2){
		printf("\n %d is greater than %d",num1,num2);
	}
	else{
		printf("\n %d is gretaer than %d",num2,num1);
	}
	getch();
}
