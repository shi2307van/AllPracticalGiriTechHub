#include<stdio.h>

void main(){
	int size1,size2,i,size3,k=0,temp,j;
	
	printf("\n Enter the number you want to add in array 1:- ");
	scanf("%d",&size1);
	
	int arr1[size1];
	
	for(i=0;i<size1;i++){
		printf("\n Enter the value in array %d :-", i+1);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n Enter the number you want to add in array 2:- ");
	scanf("%d",&size2);
	
	int arr2[size2];
	
	for(i=0;i<size2;i++){
		printf("\n Enter the value in array %d :- ",i+1);
		scanf("%d",&arr2[i]);
	}
	
	size3 = size1+size2;
	
	int arr3[size3];
	
	for(i=0;i<size1;i++){
		arr3[k] = arr1[i];
		k++;
	}
	for(i=0;i<size2;i++){
		arr3[k] = arr2[i];
		k++;
	}
	printf("\n Merged array is : \n");

	for(i=0;i<size3;i++)
	{
		printf("%d",arr3[i]);
	}

	for(i=0;i<size3;i++)
	{
		for(j=i+1;j<size3;j++)
		{
			if(arr3[i] > arr3[j])
			{
				temp = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = temp;
			}
		}
	}
	
	printf("\n Sorted array is : \n");

	for(i=0;i<size3;i++){
		printf("%d",arr3[i]);
	}
}