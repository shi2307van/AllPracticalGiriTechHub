#include<stdio.h>
#include<conio.h>

void main(){
	int sum=0,i,a[5];
	int *ptr;
	ptr = a;
	
	printf("\n Enter the element : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}	
	for(i=0;i<5;i++){
		printf("%u -----> %d\n",ptr,*ptr);
		sum = sum + *ptr;
		ptr++;
	}
	printf("\n Sum of array element :%d",sum);
}
