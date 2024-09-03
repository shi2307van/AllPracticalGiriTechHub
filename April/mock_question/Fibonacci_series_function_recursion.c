#include<stdio.h>
#include<conio.h>

void main(){
	void fib(int,int,int,int);
	
	int n;
	
	printf("\n the value of n:-");
	scanf("%d",&n);

	fib(0,1,0,n);
}

void fib(int a,int b,int sum,int n){
	
	
	if(n>0){
		printf("%d",a);
		sum = a+b;
		a = b;
		b = sum;
	
		n--;
		1fib(a,b,sum,n);
	}
}
