#include<stdio.h>
#include<conio.h>
void main(){
	struct emp{
		int id,sal;
		char name[10];
		
	};
	
	struct emp e[3];
	int i,sum=0;
	float avg;
	printf("\n Enter the id ,name and salary of employee : -");
	for(i=0;i<3;i++){
		scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
	}
	for(i=0;i<3;i++){
		sum =sum+e[i].sal;
	}
	avg = (float)sum/3;
	printf("Average of employee :- %f",avg);

}
