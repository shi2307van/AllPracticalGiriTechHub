#include<stdio.h>
#include<conio.h>

void main(){
	int isPrime(int);
	
	int no,prime;
	printf("\n Enter the number :- ");
	scanf("%d",&no);
	
	prime = isPrime(no);
	if(prime==0){
		printf("\n Number is prime number");
	}	
	else{
		printf("\n Number is not prime number");
	}
}

int isPrime(int x){
	int i=0,flag = 0;
	
	for(i=2;i<x/2;i++){
		if(x%2==0){
			flag = 1;
			break;
		}
	}
	return flag;
}
