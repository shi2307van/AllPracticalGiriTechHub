#include<stdio.h>
#include<math.h>
#include<conio.h>

void main(){
	
	double p,r,t,amount,CI;
	
	printf("Enter the Value Of P,R,T :- ");
	scanf("%lf%lf%lf",&p,&r,&t);
	
	amount = p*((pow((1+r/100),t)));
	
	CI = amount-p;
	
	printf("Compund Interest is : %lf",CI);
	
	
	getch();
}
