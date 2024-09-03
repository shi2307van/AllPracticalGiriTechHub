#include<stdio.h>
#include<conio.h>
void main(){
	struct emp{
		int id;
		char name[10];
		int sal;
	}e1,e2;
	
	printf("\n Enter the id ,name and sal of 1 employee :- ");
	scanf("%d%s%d",&e1.id,&e2.name,&e1.sal);
	
	printf("\n Enter the id ,name and sal of 2 employee :- ");
	scanf("%d%s%d",&e2.id,&e2.name,&e2.sal);
	
	if(e1.sal>e2.sal){
		printf("\n Highest Salary :- %s    %d",e1.name,e1.sal);
	}
	else if(e1.sal<e2.sal){
		printf("\n Highest Salary :- %s    %d",e2.name,e2.sal);
	}
	else{
		printf("\n Both have same salary");
	}
}
