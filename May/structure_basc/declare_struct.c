#include<stdio.h>
#include<conio.h>

void main(){
	struct emp
	{
		int id;
		char name[10];
	}e1;
	
	printf("Enter id :-");
	scanf("%d",&e1.id);
	
	printf("\n Enter the name :- ");
	scanf("%s",e1.name);
	
	printf("\n Given Record");
	printf("\n %d   %s",e1.id,e1.name);
}
