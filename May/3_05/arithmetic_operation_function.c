#include<stdio.h>
#include<conio.h>

void main(){
	void calAdd(int,int);
	void calSub(int,int);
	void calMulti(int,int);
	void calDiv(int,int);
	void calMod(int,int);
	
	int a,b,ch;
	
	printf("Enter the two values :- ");
	scanf("%d%d",&a,&b);
	
	printf("\n 1.Addition ");
	printf("\n 2.Subtraction ");
	printf("\n 3.Multiplication ");
	printf("\n 4.Division ");
	printf("\n 5.Mod");
	
	printf("\n Enter the chice :- ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			calAdd(a,b);
			break;
		
		case 2:
			calSub(a,b);
			break;
		
		case 3:
			calMulti(a,b);
			break;
		
		case 4:
			calDiv(a,b);
			break;
			
		case 5:
			calMod(a,b);
			break;
			
		default:
			printf("\n Invalid chioce!!!");
	}	
}


void calAdd(int x,int y){
	printf("\n Addition of %d + %d = %d",x,y,x+y);
}

void calSub(int x,int y){
	printf("\n Subtraction of %d - %d = %d",x,y,x-y);
}

void calMulti(int x,int y){
	printf("\n Multipication of %d * %d = %d",x,y,x*y);
}

void calDiv(int x,int y){
	printf("\n Division of %d / %d = %d",x,y,x/y);
}

void calMod(int x,int y){
	printf("\n Mod of %d mod %d = %d",x,y,x%y);
}
