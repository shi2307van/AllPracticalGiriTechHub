#include<stdio.h>
#include<conio.h>

void main(){
	int num,i;
	
	printf("\n Enter the number :- ");
	scanf("%d",&num);
	
	printf("\n All factors of the %d is the :- ",num);
	
	i=1;
	
	while(i<=num){
		if(num % i==0){
			printf("%d , ",i);
		}
		i++;
	}
}
