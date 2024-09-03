#include<stdio.h>
#include<conio.h>

void main(){
	int rollno,sub1,sub2,sub3,total,div;
	float per;
	
	printf("\n Enter the student rollno :-");
	scanf("%d",&rollno);
	
	printf("\n Marks of physics :-");
	scanf("%d",&sub1);
	
	printf("\n Marks of chemistry :- ");
	scanf("%d",&sub2);
	
	printf("\n MArks of Maths :- ");
	scanf("%d",&sub3);
	
	total = sub1+sub2+sub3;
	
	per = total*100/300;
	
	printf("\n Rollno :- %d",rollno);
	printf("\n Marks in Physics :- %d",sub1);
	printf("\n Marks in Chemistry :- %d",sub2);
	printf("\n Marks in Maths :- %d",sub3);
	printf("\n Total Marks :- %d",total);	
	printf("\n percentage %.2f",per);
	
	(per>=80) ? printf("\n First division !!!") :
		(per>=60 && per<=80) ? printf("\n Second Division !!!!") :
			(per>= 40 && per<=60) ?printf("\n Third Division !!!"):
								printf("\n Fail !!!");
								
	getch();
}