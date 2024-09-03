#include<stdio.h>
#include<conio.h>

void main(){
	int i,a[5] = {10,20,30,40,50};
	int *ptr;
	ptr = a;
	for(i=0;i<5;i++){
		printf("%u -----> %d\n",ptr,*ptr);
		ptr++;
	}
}
