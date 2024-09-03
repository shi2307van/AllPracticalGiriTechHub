#include<stdio.h>
void main(){
	int a[5],b[5];
	int i,j;
	int *ptr1,*ptr2;

	
	printf("\n Enter the array element : ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	ptr1 = a;
	ptr2 = b;
	
	while(ptr1<=ptr2){
		*ptr2 = *ptr1;
		*ptr1++;
		*ptr2++;
	}
	
	for(i=0;i<5;i++){
		printf("%d",*(ptr2+i));
	}
}
