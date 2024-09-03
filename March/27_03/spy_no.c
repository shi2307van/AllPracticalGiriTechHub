#include<stdio.h>
#include<conio.h>

void main(){
	int temp,num,rem,sum=0,pro=1;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	
	temp = num;
	
	while(num>0){
		rem = num % 10;
		num = num / 10;
		sum = sum + rem;
		pro = pro * rem;
	}
	if(sum==pro){
		printf("\n %d is spy number",temp);
	}
	else{
		printf("\n %d is not a spy number",temp);
	}
}