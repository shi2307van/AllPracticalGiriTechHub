#include<stdio.h>
#include<conio.h>

void main(){
	int num,i,sum=0;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	i=1;
	while(i<=num){
		sum = sum + i;
		i++;
	}
	printf("\n Sum of natural number :- %d",sum);
}
