#include<stdio.h>
#include<conio.h>

void main(){
	
	int num;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	if(num > 0){
		printf("%d is Positive Number !!!",num);
	}
	else{
		printf("%d is Negative Number !!!!",num);
	}
	
	getch();
}
