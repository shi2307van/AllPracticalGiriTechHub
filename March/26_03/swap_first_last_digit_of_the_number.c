#include<stdio.h>
#include<conio.h>

void main(){
	int n,first,last,temp;
	
	printf("\n Enter the number :- ");
	scanf("%d",&n);
	temp = n;
	
	printf("\n After Swap ");
	int count = 0;
	
	while(temp>0){
	 count++;
	 temp=temp/10;
	}
	printf("\n Count Number :-%d ",count);
	
	last = n % 10;
	n= n/10;
	
	int noPow = pow(10,(count-2));
	int mid= n%noPow;
	printf("\n Mid Number :-%d ",mid);
	first = n/noPow;
	printf("\n First Number :-%d ",first);
	
	int finalNo = last*pow(10,(count-1)) + (mid) + first;
	printf("\n After Swap the Number :-%d",finalNo);
}
