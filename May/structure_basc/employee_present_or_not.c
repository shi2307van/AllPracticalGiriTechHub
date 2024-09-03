#include<stdio.h>
#include<conio.h>
void main(){
	struct emp {
		int id,sal;
		char name[10];
	}e[3];
	char sname[10],flag=0,i;
	printf("Enter the id ,name and salary :- ");
	for(i=0;i<3;i++){
		scanf("%d%s%d",&
		e[i].id,&e[i].name,&e[i].sal);
    }
	
	printf("Enter the name to be searched :- ");
	scanf("%s",sname);
	
	for(i=0;i<3;i++){
		if(strcmp(sname,e[i].name)==0){
			printf("\n %d %s %d",e[i].id,e[i].name,e[i].sal);
			flag=1;
		}
	}
	if(flag==0){
		printf("\n Employee not present");
	}
}

