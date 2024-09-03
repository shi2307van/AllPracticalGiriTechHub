#include<stdio.h>
void main(){
	int num;
	int *ptr;
	
	ptr = &num;
	num =100;
	
	printf("using variable num :\n");
	printf("Value of num %d \n address of num :%u\n",num,&num);
	
	printf("\n using pointer variable :\n");
	printf("Value of num %d \n address of num :%u\n",*ptr,ptr);
} 
