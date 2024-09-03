#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,target,n,flag=0;
	
	printf("\n Enter the size of array :-");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\n Enter the array element");
	for(i=0;i<n;i++){
		printf("\n arr[%d]  :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Value of sum in array :- ");
	scanf("%d",&target);
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				printf("(%d,%d)",i,j);
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		printf("\n Pair not found!!!");
	}
}
