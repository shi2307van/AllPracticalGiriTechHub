#include<stdio.h>
#include<conio.h>

void main(){
	int i,num;
	
	printf("\n Enter the number you want to print table :- ");
	scanf("%d",&num);
	
	i=1;
	while(i<=10){
		printf("\n %d * %d = %d ",num,i,num*i);
		i++;
	}
}
