#include<stdio.h>
#include<conio.h>

void main(){
	int num,temp,rem,f,i,sum=0;
	
	printf("\n Enter the number :- ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num>0){
		rem = num%10;
		f=1;
		i=1;
//		printf("Factorial of %d is %d\n ",rem,fact);
		while(i<=rem){
			f=f*i;
			i++;
		}
		sum = sum + f;
		num = num/10;
	}
	if(temp==sum){
		printf("\n %d is the strong number \n ",temp);
	}
	else{
		printf("\n %d is the not strong number \n",temp);
	}
	
}
