#include<stdio.h>

void main(){
	int size,i,max1,max2;
	
	printf("\n Enter the size of array :- ");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("\n Enter the element %d :- ",i+1);
		scanf("%d",&arr[i]);
	}
	max1 = max2 = arr[0];

	for(i=1;i<size;i++){
		if(arr[i]>max1){
			max2 = max1;
			max1 = arr[i]; 
		}
	}
	printf("\n Second  Maximum Element in array :- %d",max2);


}
