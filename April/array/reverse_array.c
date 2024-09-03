#include<stdio.h>
#include<conio.h>

void main(){
	int arr[10],i,size,end,mid,temp;
	
	printf("\n Enter the size of array :- ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		printf("\n Enter the element arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	end = size-1;
	mid = size/2;
	
	for(i=0;i<=mid;i++){
		temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;
	}
	printf("\n The Reversed array :");
	for(i=0;i<size;i++){
		printf("\t %d",arr[i]);
	}

	

//	int rev[5],j=0;
//	
//	for(i=4;i>=0;i--){
//		rev[j] = arr[i];
//		j++;   
//	}
//	printf("The Reversed array :");
//	for(i=0;i<5;i++){
//		printf("%d",rev[i]);
//	}

}
