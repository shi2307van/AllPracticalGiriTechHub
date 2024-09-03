#include<stdio.h>
#include<conio.h>

void main(){
	int ch;
	

	
//	printf("\n 1. Monday");
//	printf("\n 2. Tuseday");
//	printf("\n 3. Wednesday");
//	printf("\n 4. Thusday");
//	printf("\n 5. Friday");
//	printf("\n 6. Saturday");
//	printf("\n 7. Sunday");
	
	printf("\n Enter your weekday :- ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\n Monday ");
			break;
		case 2:
			printf("\n Tuseday ");
			break;
		case 3:
			printf("\n Wednesday ");
			break;
		case 4:
			printf("\n Thusday ");
			break;
		case 5:
			printf("\n Friday ");
			break;
		case 6:
			printf("\n Saturday ");
			break;
		case 7:
			printf("\n Sunday ");
			break;
		default :
			printf("\n invalid choice ");
	}
}
