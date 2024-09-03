#include<stdio.h>
#include<conio.h>
void main(){
	struct emp{
		int id;
		int sal;
		char name[10];
	};
	struct emp e[5];
	int i;
	printf("Enter the id,name and salary of employee:- ");
	for(i=0;i<5;i++){
		scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
	}
	for(i=0;i<5;i++){
		e[i].sal = e[i].sal+200;
	}
	printf("\n Display the details of employee");
	for(i=0;i<5;i++){
		printf("\n \t%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
}
