#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,temp,a[5];
	
	printf("\n Enter the 5 values in array :-");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\n Display array before sorting :-");
	for(i=0;i<5;i++){
		printf("%d ,",a[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n Display array after sorting :- ");
	for(i=0;i<5;i++)
	{
		printf("%d ,",a[i]);
	}
} 