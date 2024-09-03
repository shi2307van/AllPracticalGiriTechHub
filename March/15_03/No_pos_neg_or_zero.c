#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	(num>0) ? printf("\n %d is the positive Number",num) : 
	    (num < 0) ? printf("%d is the negative Number",num):printf("%d is the Zero",num);
	    
	getch();
}
