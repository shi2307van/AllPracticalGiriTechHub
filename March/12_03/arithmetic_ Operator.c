#include<stdio.h>
#include<conio.h>

void main (){
	int a,b,add,sub,div,mul,mod;
	
	printf("\n Enter Value of A:-");
	scanf("%d",&a);
	
	printf("\n Enter Value of B:-");
	scanf("%d",&b);
	
	add = a+b;
	printf("\n Addition of %d and %d is %d",a,b,add);
	
	sub = a-b;
	printf("\n subtraction of %d and %d is %d",a,b,sub);
	
	div= a/b;
	printf("\n division of %d and %d is %d",a,b,div);
	
	mul= a*b;
	printf("\n multiplication of %d and %d is %d",a,b,mul);
	
	mod= a%b;
	printf("\n mod of %d and %d is %d",a,b,mul);
	
	getch();
}
