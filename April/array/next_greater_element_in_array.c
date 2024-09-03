#include<stdio.h>
#include<conio.h>

void main(){
	int n,i,j,next;
	
	printf("\n Enter the size of array :- ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\n Enter the element in array ");
	for(i=0;i<n;i++){
		printf("\n arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		next=-1;
		for(j=i+1;j<n;j++){
			if(arr[i] < arr[j]){
				next = arr[j];
				break;
			}
		}
		printf("%d ---> %d\n",arr[i],next);
	}
	
}
