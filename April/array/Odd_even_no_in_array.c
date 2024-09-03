#include<stdio.h>
#include<conio.h>

void main(){
	int size,i;
	
	printf("\n Enter the size of array :-");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("\n Enter the element %d :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Even number in the array are :\n");
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			printf("\t %d",arr[i]);
		}
	}
	
	printf("\n Odd Number in the array are : \n");
	for(i=0;i<size;i++){
		if(arr[i]%2!=0){
			printf("\t %d",arr[i]);
		}
	}
	
}
