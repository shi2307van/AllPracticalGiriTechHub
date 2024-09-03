#include<stdio.h>
#include<conio.h>

void main(){
	int size,i,max1,max2,max3;
	
	printf("\n Enter the size of array :-");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("\n Element arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	max1 = max2 = max3= arr[0];
	
	for(i=0;i<size;i++){
		if(arr[i]>arr[0]){
			max3 = max2;
			max2 = max1;
			max1 = arr[i];
		}
	}
	printf("\n Maximum = %d and second maximum = %d and third maximum :-%d",max1,max2,max3);
}
