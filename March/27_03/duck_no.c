#include<stdio.h>
#include<conio.h>

void main(){
	
	int num,flag=0,rem,temp;
	
	printf("\n Enter the value :- ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num>0){
		rem = num%10;
		if(rem==0){
			flag = 1;
			break;
		}
		num = num/10;
	}
	if(flag)
	{
		printf("\n %d is the duck number!!",temp);
	}
	else
	{
		printf("\n %d is the not duck number !!!",temp);
	}
}
