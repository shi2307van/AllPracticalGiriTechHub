#include<stdio.h>
#include<conio.h>

void main(){
	int age;
	
	printf("\n Enter the age :-");
	scanf("%d",&age);
	
	if(age>=18){
		printf("\n Congratulation ! you are eligible for casting your vote.");
	}
	else{
		printf("\n sorry ! you are not eligible for casting your vote.");
	}
	getch();
}
