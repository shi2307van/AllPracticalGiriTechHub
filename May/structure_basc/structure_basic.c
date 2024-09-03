#include<stdio.h>
#include<conio.h>

void main(){
	struct emp{
		int id;
		char name[10];	
	}e1;
	
	printf("\n %d",sizeof(e1));
	printf("\n %u",&e1);
	printf("\n %u",&e1.id);
	printf("\n %u",&e1.name);
}
