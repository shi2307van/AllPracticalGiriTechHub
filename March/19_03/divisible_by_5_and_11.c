#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0){
		printf("\n %d is divisible by 5 and 11",num);
	}
	else{
		printf("\n %d is not divisible by 5 and 11",num);
	}
	getch();
}
