
#include<stdio.h>
#include<conio.h>

void main(){
	int is_enroll,capicity,already_enroll;
	
	printf("\n ENter the friends who enroll in the course :- ");
	scanf("%d",&is_enroll);
	
	printf("\n Enter the maximum seat in course :-");
	scanf("%d",&capicity);
	
	printf("\n Enter the student already enroll that course :- ");
	scanf("%d",&already_enroll);
	
	
	(capicity > already_enroll+is_enroll || capicity == is_enroll)?printf("\n YES"):printf("\n NO");
	
	getch();
}
