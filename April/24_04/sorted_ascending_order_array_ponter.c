#include<stdio.h>
#include<conio.h>

void main(){
	int j,i,a[5],temp;
	int *ptr;
	ptr = a;
	
	printf("\n Enter the element : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(*(ptr+i)>*(ptr+j)){
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	printf("\n Display Sorted Array :");
	for(i=0;i<5;i++){
		printf("%d",*(ptr+i));
	}
}
