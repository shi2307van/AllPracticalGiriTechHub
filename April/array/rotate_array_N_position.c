#include<stdio.h>
#include<conio.h>

void main(){
	int size,arr[10],i,pos,temp,j;
	
	printf("\n Enter the size of array :- ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n Element arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Display array :- ");
	for(i=0;i<size;i++){
		printf("\t %d",arr[i]);
	}
	
	printf("\n Enter the position :- ");
	scanf("%d",&pos);	
	
	for(i=0;i<pos-1;i++){
		temp=arr[0];
		for(j=0;j<size-1;j++){
			arr[j]=arr[j+1];
		}
		arr[size-1]=temp;
	}
	
	printf("\n Display Rotate array :- ");
	for(i=0;i<size;i++){
		printf("\t %d",arr[i]);
	}
}
