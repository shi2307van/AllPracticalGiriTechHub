#include<stdio.h>
#include<conio.h>

void main(){
	int size,i;
	
	printf("\n Enter the size of array :- ");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("\n Element arr[%d]",i);
		scanf("%d",&arr[i]);
	}
}
