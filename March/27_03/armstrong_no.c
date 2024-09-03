#include<stdio.h>
#include<conio.h>

void main(){
	int num,temp,rem,res=0;
	
	printf("\n Enter the Number :-");
	scanf("%d",&num);
	temp = num;
	
	while(num>0){
		rem = num%10;
		res += rem*rem*rem;
		num = num/10; 
	}
	if(res == temp){
		printf("\n %d is  armstrong number!!",temp);
	}
	else{
		printf("\n %d is not armstrong number !!!",temp);
	}
}
