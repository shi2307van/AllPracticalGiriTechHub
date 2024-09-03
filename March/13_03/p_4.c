#include<stdio.h>
#include<conio.h>

void main(){
	int s1,s2,s3,s4,s5,total,per;
	
	
	printf("\n Marks of the First Subject:- ");
	scanf("%d",&s1);
	
	printf("\n Marks of the Second Subject:- ");
	scanf("%d",&s2);
	
	printf("\n Marks of the Third Subject:- ");
	scanf("%d",&s3);
	
	printf("\n Marks of the Fourth Subject:- ");
	scanf("%d",&s4);
	
	printf("\n Marks of the Fifth Subject :- ");
	scanf("%d",&s5);
	
	total = s1+s2+s3+s4+s5;
	
	printf("\n Total Of the 5 Subject Marks is :- %d",total);
	
	per = total*100/500;
	
	
	getch();
	
	
}
