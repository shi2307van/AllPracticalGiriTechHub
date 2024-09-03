#include<stdio.h>
#include<conio.h>

void main(){
	int arr[10],size,i,pos,flag=0;
	
	printf("\n Enter the size of array :- ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		printf("Element arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Enter the value of search :- ");
	scanf("%d",&pos);
	
	for(i=0;i<size;i++){
		if(arr[i]==pos){
			flag=1;
			break;
		}
	}
		if(flag){
			printf("\n Element is found !!!");
		}
		else{
			printf("\n Element is not found!!!");
		}
	
}
