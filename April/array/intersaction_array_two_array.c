#include<stdio.h>
#include<conio.h>

void main(){
	int arr1[5],arr2[5];
	int s1,s2,s3,flag,index;
	int i,j;
	
	printf("\n Enter the no of array element you want in array 1:-");
	scanf("%d",&s1);
	
	for(i=0;i<s1;i++){
		printf("Element %d :",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n Enter the no of array element you want in array 2:-");
	scanf("%d",&s2);
	
	for(i=0;i<s2;i++){
		printf("Element %d :",i);
		scanf("%d",&arr2[i]);
	}
	
	s3 = s1+s2;
	int arr3[s3];
	index=0;
	for(i=0;i<s1;i++){
		flag=0;
		for(j=0;j<s2;j++){
			if(arr1[i]==arr2[j]){
				flag=1;
				break;
			}
		}
		if(flag){
			arr3[index]=arr2[j];
			index++;
		}
	}
	printf("\n After the Intersaction :- ");
	
	for(i=0;i<index;i++)
	{
		printf("%d",arr3[i]);
	}
	
}
