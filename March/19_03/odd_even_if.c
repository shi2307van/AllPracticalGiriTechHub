#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("\n Enter the number :-");
	scanf("%d",&num);
	
	
	if(num%2==0){
		printf("\n %d is Even Number !!!",num);
	}
	else{
		printf("\n %d is Odd Number !!!",num);
	}
	
	getch();
}
