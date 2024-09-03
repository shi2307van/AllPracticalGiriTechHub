#include<stdio.h>
#include<conio.h>

void main(){
	int ch;
	printf("\n Enter your choice :- ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\n January Month 31 day");
			break;
			
		case 2:
			printf("\n February Month 28/29 day");
			break;
		
		case 3:
			printf("\n March Month 31 day");
			break;
		
		case 4:
			printf("\n  April Month 30 day");
			break;
			
		case 5:
			printf("\n May Month 31 day");
			break;
			
		case 6:
			printf("\n June Month 30 day");
			break;
			
		case 7:
			printf("\n July Month 31 day");
			break;
		
		case 8:
			printf("\n August Month 31 day");
			break;
		
		case 9:
			printf("\n September Month 30 day");
			break;
			
		case 10:
			printf("\n October Month 31 day");
			break;
		
		case 11:
			printf("\n November Month 30 day");
			break;
			
		case 12:
			printf("\n December Month 31 day");
			break;
			
		default :
			printf("\n Invalid Month number !!");
			
		
			
	}
}
