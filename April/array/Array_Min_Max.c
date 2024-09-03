#include<stdio.h>
#include<conio.h>

void main(){
	int s[5],i,max,min;
	
	printf("\n Enter the value :- ");
	for(i=0;i<5;i++){
		scanf("%d",&s[i]);
	}
	
	max = s[0];
	min = s[0];
	
	for(i=0;i<5;i++){
		if(s[i]>max){
			max = s[i]; 
		}
		if(s[i]<min){
			min = s[i];
		}
	}
	
	printf("\n Minimum value :- %d ",min);
	printf("\n Maximum value :- %d ",max);
}
