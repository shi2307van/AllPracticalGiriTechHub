#include<stdio.h>
#include<conio.h>

void main(){
	int num,i,flag=0;
	
	printf("\n Enter the number :- ");
	scanf("%d",&num);
	
	i=2;
	
	while(i<=num/2){
		if(num%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0){
		printf("\n %d is prime number!!",num);
	}
	else{
		printf("\n %d is not prime number!!!",num);
	}
}
