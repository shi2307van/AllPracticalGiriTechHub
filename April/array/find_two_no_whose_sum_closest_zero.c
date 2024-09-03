#include<stdio.h>
#include<conio.h>

void main(){
	int n,i,j,min1Pair,min2Pair,minSum,sum;
	
	printf("\n Enter the size of array : - ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\n Enter the array element ");
	for(i=0;i<n;i++){
		printf("\n arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	min1Pair = arr[0];
	min2Pair = arr[1];
	minSum = min1Pair + min2Pair;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			sum = arr[i] + arr[j];
			if(abs(sum)< abs(minSum)){
				minSum = sum;
				min1Pair = arr[i];
				min2Pair = arr[j];
			}
		}
	}
	printf("\n [%d,%d]\n ",min1Pair,min2Pair);
//	if(arr[]==null || n < 2) {
//		
//	}
}
