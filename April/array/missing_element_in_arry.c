#include<stdio.h>
#include<conio.h>

void main(){
	int arr[5];
	int total=0,i;
	
	printf("\n enter the 5 values in ascending order :-");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=6;i++){
		total += i;
	}
	
	for(i=0;i<5;i++){
		total -= arr[i];
	}
	printf("Missing element from the array : %d\n",total);
}