#include<stdio.h>
#include<conio.h>

void main(){
	int arr[10],size,i,end,mid,flag=0;
	
	printf("\n Enter the size of array :-");
	scanf("%d",&size);
	
	
	for(i=0;i<size;i++){
		printf("\n Element arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	end = size-1;
	mid = size/2;
	
	for(i=0;i<mid;i++){
		if(arr[i]==arr[end]){
			flag=1;
			break;
		}
	}
	if(flag){
		printf("\n Array is palindrome array !!!");
	}
	else{
		printf("\n Array is not palindrome array !!!");
	}
	
}
