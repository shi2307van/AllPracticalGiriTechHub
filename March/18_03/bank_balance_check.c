#include<stdio.h>
#include<conio.h>

void main(){
	int amount;
	float balance;
	
	printf("\n Enter the amount you want to withdraw :- ");
	scanf("%d",&amount);
	
	printf("\n Enter the balance in your account :- ");
	scanf("%f",&balance);
	
	(amount%5==0 && amount < balance) ? printf("\n Successfull Transaction :- %f ",balance-amount-0.50):
		(amount%5!=0) ? printf("\n Incorrect withdrawal Amount(not multiple by 5) :- %f",balance):
			(amount > balance)?printf("\n Insufficient Funds :- %f",balance):
				printf("wrong input");
				
	getch();
}
