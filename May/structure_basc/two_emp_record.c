#include<stdio.h>
#include<conio.h>
void main(){
	struct emp{
		int id;
		char name[10];
	}e1,e2;
	
	printf("\n Enter the value of 1 id and name :-");
	scanf("%d%s",&e1.id,&e1.name);
	
	printf("\n Enter the value of 2 id and name :- ");
	scanf("%d%s",&e2.id,&e2.name);
	
	printf("\n Given Record \n ");
	printf("%d     %s\n",e1.id,e1.name);
	printf("%d     %s\n",e2.id,e2.name);
}
