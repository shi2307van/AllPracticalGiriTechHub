#include<stdio.h>
#include<conio.h>

void main(){
	
	int isPerfectNo(int);//defination
	
	int no,sum;
	printf("\n Enter the number :- ");
	scanf("%d",&no);
	
	sum = isPerfectNo(no);//calling

	if(sum==no){
		printf("\n Number is perfect number");
	}
	else{
		printf("\n Number is not perfect number");
	}
	
}

int isPerfectNo(int x) //declaration
{ 
	
	int rem,sum=0,i;
	
	for(i=1;i<x;i++)
	{
		rem = x%i;
		if(rem==0){
			sum = sum + i;
		}
	}
	return sum;
}
