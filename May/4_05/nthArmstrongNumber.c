#include<stdio.h>
#include<conio.h>

void main(){
	void ntharmStrongNo(int);
	
	int no;
	printf("\n Enter the number :- ");
	scanf("%d",&no);

	ntharmStrongNo(no);
	
}

void ntharmStrongNo(int no)
{
	int i,temp,r,sum;

	for(i=1;i<=no;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}
		if(i==sum)
			printf("%d\n",sum);
		
	}
	printf("\n");
	
}
