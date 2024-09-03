#include<stdio.h>

#include<conio.h>

void main(){
	int arr[5];
	int size,i,pos;
	
	printf("\n Enter the size of array element :-");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		printf("\n Element %d :",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Enter the element position to delete :-");
	scanf("%d",&pos);
	
	if(pos<0||pos>size){
		printf("\n Invalid position !!! please enter the position between 1 to %d ",size);
	}
	else{
		for(i=pos-1;i<size-1;i++){
			arr[i]=arr[i+1];
		}
		size--;
		
		for(i=0;i<size;i++){
			printf("\n %d \t",arr[i]);
		}
	}
}
