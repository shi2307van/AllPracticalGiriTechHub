#include<stdio.h>
#include<conio.h>

void main(){
	void nthPrimeNo(int);
	
	int no;
	
	printf("\n Enter the number :-");
	scanf("%d",&no);
	
	nthPrimeNo(no);
	
}

void nthPrimeNo(int x){
	int num,count,i;
	
	for(num=1;num<=x;num++)
	{
		count= 1;
		for(i=2;i<num/2;i++)
		{
			if(num%i==0)
			{
				count = 0;
				break;
			}
		}
		
		if(count){
			printf("\n %d ",num);
		}
	}
}
