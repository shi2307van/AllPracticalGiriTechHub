#include<stdio.h>
#include<conio.h>
struct Employee{
	int id;
	char name[90];
	int sal;
};
void main(){
	struct Employee emp[5];
	int i;
	printf("\n Enter the name,id and salary of employee :- ");
	for(i=0;i<5;i++)
	{
		scanf("%s%d%d",&emp[i].name,&emp[i].id,&emp[i].sal);	
	}
	printf("\n Display the name ,id and salary of employee :- ");
	for(i=0;i<5;i++)
	{
		printf("\n%s\t%d\t%d",emp[i].name,emp[i].id,emp[i].sal);
	}		
}
