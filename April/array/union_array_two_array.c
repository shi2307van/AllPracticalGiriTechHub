#include<stdio.h>
#include<conio.h>

void main()
{
	int arr1[5],arr2[5];
	int s1,s2,s3,flag,index;
	int i,j;
	
	printf("\n Input number of element to be store in first array :- ");
	scanf("%d",&s1);
	
	printf("\n Input %d element in array \n",s1);
	
	for(i=0;i<s1;i++)
	{
		printf("Element %d :",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n Input number of element to be store in second array :- ");
	scanf("%d",&s2);
	
	printf("\n Input %d element in array \n",s2);
	
	for(i=0;i<s2;i++)
	{
		printf("Element %d :",i);
		scanf("%d",&arr2[i]);
	}	
	
	s3 = s1+s2;
	index = 0;
	int arr3[s3];
	for(i=0;i<s1;i++)
	{
		arr3[index] = arr1[i];
		index++;
	}
	
	for(i=0;i<s2;i++){
		flag=0;
		for(j=0;j<s1;j++){
			if(arr2[i] == arr1[j]){
				flag=1;
				break;
			}
		}
		if(!flag){
			arr3[index]=arr2[i];
			index++;
		}
	}
	
	printf("\n After the Union :- ");
	
	for(i=0;i<index;i++)
	{
		printf("%d ",arr3[i]);
	}
}
