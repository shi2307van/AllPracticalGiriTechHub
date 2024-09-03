#include<stdio.h>
#include<conio.h>

void main(){
	int s[5],i,sum=0;
	
	printf("\n Enter the value :-");
	
	for(i=0;i<5;i++){
		scanf("%d",&s[i]);
	}
	
	for(i=0;i<5;i++){
		sum = sum + s[i];
		printf("\n %d",s[i]);
	}
	
	printf("\n Sum of all Value :- %d",sum);

}
