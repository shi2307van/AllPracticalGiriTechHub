#include<stdio.h>
#include<conio.h>

void main(){
	int phy,chem,bio,com,math,total,per;
	
	printf("\n enter the marks of physics :-");
	scanf("%d",&phy);
	printf("\n enter the marks of Chemistry :-");
	scanf("%d",&chem);
	printf("\n enter the marks of biology :-");
	scanf("%d",&bio);
	printf("\n enter the marks of math :-");
	scanf("%d",&math);
	printf("\n enter the marks of computer :-");
	scanf("%d",&com);
	
	total = phy + chem + bio + math + com;
	per = total*100/500;
	
	printf("percentage :- %d",per);
	
	if(per >= 90){
		printf("\n Grade A");
	}
	else if(per >= 80){
		printf("\n Grade B");
	}
	else if(per >= 70){
		printf("\n Grade C");
	}
	else if(per >= 60){
		printf("\n Grade D");
	}
	else if(per >= 40){
		printf("\n Grade E");
	}
	else{
		printf("\n Grade F");
	}
	getch();
}
