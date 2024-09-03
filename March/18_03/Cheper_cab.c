#include<stdio.h>
#include<conio.h>
void main(){
	int cab1,cab2;
	
	printf("\n Enter the Cab1 charges :- ");
	scanf("%d",&cab1);
	
	printf("\n Enter the Cab2 charges :- ");
	scanf("%d",&cab2);
	
	 ( cab1 > cab2 )?printf("Second"):
	 		(cab1 == cab2) ? printf("Any"):
	 			(cab1 < cab2) ? printf("First"):
	 				printf("Wrong Input");
	 				
	getch();
}
