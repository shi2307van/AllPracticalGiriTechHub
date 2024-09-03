#include<stdio.h>
#include<conio.h>

void main(){
	int base,index,i;
	float res=1.0;
	printf("\n Enter the base :- ");
	scanf("%d",&base);
	
	printf("\n Enter the exponent :- ");
	scanf("%d",&index);
	
	i=1;
	while(i<=index){
		res *= base;
		i++;
	}
	printf("\n Answer = %.2f",res);
	
}
