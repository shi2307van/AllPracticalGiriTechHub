#include<stdio.h>
#include<conio.h>

void main(){
	int size,i,no,ceil;
	
	printf("\n Enter the size of array :- ");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("\n Element arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Enter the value of Number you want to find ceil :- ");
	scanf("%d",&no);
	
	if(no<=arr[0]){
	  ceil=arr[0];
	}
	for(i=0;i<size;i++){
		
		 if(arr[i]==no){
		 	ceil = arr[i];
		 }
		 if(arr[i]<no && arr[i+1]>=no){
		 	ceil = arr[i+1];
		 }

	}
	 if(no>=arr[size]){
		ceil = -1;
	}	

	printf("\n ceil %d is the  :- %d ",no,ceil);

}
