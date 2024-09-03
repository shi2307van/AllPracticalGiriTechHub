#include<stdio.h>
void main(){
	int size,arr[20],i,j,k;
	
	printf("\n Enter the size of array :-");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		printf("Element arr[%d] :-",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<size;k++){
					arr[k] = arr[k+1];
				}
				size--;
				j--;
			}
			
		}
	}
	
	printf("\n Array elements after deletion of the duplicate elements :");
	for(i=0;i<size;i++){
		printf("\n %d",arr[i]);
	}
}
