#include<stdio.h>
#include<conio.h>

void main(){
	int num,rem,sum=0,i;
	
	printf("\n Enter the number :-");
	scanf("%d",&num);
	
	i=1;
	while(i<num){
		rem = num%i;
		if(rem==0){
			sum = sum + i;
		}
		i++;
	}
	if(sum==num){
		printf("\n %d is the Perfect Number",num);
	}
	else{
		printf("\n %d is the not perfect number",num);
	}
}
