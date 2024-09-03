#include<stdio.h>
#include<conio.h>

void main(){
	float hegt;
	
	printf("\n Enter the height in centimeter :- ");
	scanf("%f",&hegt);
	
	if(hegt < 150.0){
		printf("\n The person is dwarf..");
	}
	else if(hegt>=150.00 && hegt <=165.0){
		printf("\n The person is average heighted..");
	}
	else if(hegt>=165.0 && hegt <=195.0){
		printf("\n The person is taller..");
	}
	else{
		printf("\n Invalid input..");
	}
	getch();
}
