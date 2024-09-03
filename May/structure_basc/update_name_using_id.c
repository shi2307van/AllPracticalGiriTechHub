#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	struct emp
	{
		int id,sal;
		char name[10];
	}e[3];
	int i,sid;
	char uname[10];
	printf("\n Enter the id ,name and salary of employee :-");
	for(i=0;i<3;i++){
		scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
	}
	printf("Display record before update");
	for(i=0;i<3;i++){
		printf("\n %d \t %s\t %d",e[i].id,e[i].name,e[i].sal);
	}
	printf("\n Enter the user id you can update it:- ");
	scanf("%d",&sid);
	
	printf("\n ENter the name you will be updated :- ");
	scanf("%s",&uname);
	
	for(i=0;i<3;i++){
		if(sid==e[i].id){
			strcpy(e[i].name,uname);
		}
	}
	printf("Display record after update");
	for(i=0;i<3;i++){
		printf("\n %d \t %s\t %d",e[i].id,e[i].name,e[i].sal);
	}
}
