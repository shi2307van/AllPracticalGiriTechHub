#include<stdio.h>
#include<conio.h>

void main(){
	int num,i,sum=0;
	
	printf("\n Enter the number:- ");
	scanf("%d",&num);
	
	i=1;
	while(i<=num){
		if(i%2!=0){
			sum = sum + i;
		}
		i++;
	}
	printf("\n Sum of all odd number :- %d",sum);
}
