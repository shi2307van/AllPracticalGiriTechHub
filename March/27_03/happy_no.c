#include<stdio.h>
#include<conio.h>

void main(){
	
	int i,j,num,temp,sum=0;
	
	printf("\n Enter the number :-");
	scanf("%d",&num);

	while(sum!=1 && sum!=4){
		sum=0;
		while(num >0){
			j=num%10;
			sum = sum + (j*j);
			num = num / 10;
		}
		num = sum;
	}
	
	if(sum==1){
		printf("\n number is the happy number !!!");
	}
	else{
		printf("\n number is not happy number !!!");
	}
}