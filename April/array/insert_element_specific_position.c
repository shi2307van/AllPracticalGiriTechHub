#include<stdio.h>
#include<conio.h>

void main(){
	int arr[5];
	int i,num,pos;
	
	printf("\n Enter the element :- ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\n Enter the element insert in array :- ");
	scanf("%d",&num);
	
	printf("\n Enter the element position of the number:-");
	scanf("%d",&pos);
	
	if(pos > 6 || pos <=0){
		printf("\n Invalid position !! please enter position between 1 to 5");
	}
	else{
		for(i=5;i>=pos;i--){
			arr[i] = arr[i=1];
		}
		arr[pos-1] = num;
	}
	
	printf("\n Array elements after insertion :");
	for(i=0;i<5;i++){
		printf("\n %d",arr[i]);
	}
}
