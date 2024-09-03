#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,size,count=0;
	
	printf("\n Enter the size of array :-");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("\n Enter the element in array  %d :- ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count > size/2)
		{
			printf("\n Majority Element :- %d",arr[i]);
		}
	}
			
		if(count< size/2){
			printf("\n There is no majority element in given array !!");
		}

}
