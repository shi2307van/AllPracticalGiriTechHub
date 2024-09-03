#include<stdio.h>
#include<conio.h>

void main(){
	int num,i;
	
	printf("\n Enter the number :-");
	scanf("%d",&num);
	
	while(num > 0 ){
		printf("\n %d",num);
		num--;
	}
	return 0;
}
