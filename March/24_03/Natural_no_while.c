#include<stdio.h>
#include<conio.h>

void main(){
	int num,i;
	
	printf("\n Enter the number :- ");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		printf("\n %d",i);
		i++;
	}

	return 0;
}
