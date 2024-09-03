#include<stdio.h>
#include<conio.h>

void main(){
	void calAreaOfCircule(int);
	void calAreaOfRactangle(int,int);
	void calAreaOfTriangle(int,int);
//	void calAreaOfQuadrilateral();
	void calAreaOfCircumference(int);
	
	int ch;
	int radius;	
	int len,wid;
	int bred,heit;
	
	printf("\n 1. Area of Circle");
	printf("\n 2. Area of Ractangle");
	printf("\n 3. Area of Triangle");
	printf("\n 4. Area of Quadrilateral");
	printf("\n 5. Area of Circumference");
	
	printf("\n Enter your chioce : - ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\n Enter the value of radius :- ");
			scanf("%d",&radius);
			calAreaOfCircule(radius);
			break;
			
		case 2:
			printf("\n Enter the value of breadth and height :- ");
			scanf("%d%d",&bred,&heit);
			calAreaOfRactangle(bred,heit);
			break;
			
		case 3:
			printf("\n Enter the value of length and width :- ");
			scanf("%d%d",&len,&wid);
			calAreaOfTriangle(len,wid);
			break;
			
		case 4:
			
			
		case 5:
			printf("\n Enter the value of radius :- ");
			scanf("%d",&radius);
			calAreaOfCircumference(radius);
			break;
			
		default:
			printf("\n invalid choice!!!");
			
	}

}
void calAreaOfCircule(int x){
	int area;
	area = x*x*3.14;
	printf("\n The Area of circle :- %d",area);
}
void calAreaOfRactangle(int x,int y){
	int area;
	area = x*y;
	printf("\n The Area of Ractangle :- %d",area);
}
void calAreaOfTriangle(int x,int y){
	int area;
	area = 0.5*x*y;
	printf("\n The Area of Triangle :- %d",area);
}
void calAreaOfCircumference(int x){
	int area;
	area = 2*3.14*x;
	printf("\n The Area of Quadrilateral :- %d",area);
}
void calAreaOfQuadrilateral(int x){
	int area;
	area = 2*3.14*x;
	printf("\n The Area of Circumference :- %d",area);
}
