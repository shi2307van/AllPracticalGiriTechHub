#include<iostream>
#include<conio.h>
using namespace std;

class Area{
	public:
		Area(int x){
			cout<<"\n Area of circle:-" <<3.14*x*x;
		}
		Area(int x,int y){
			cout<<"\n Area of rectangle :- " <<x*y;
		}
		Area(float x,float y){
			cout<<"\n Area of triangle :- "<<0.5*x*y; 
		}
};
int main(){
	Area a1(3);
	Area a2(2,6);
	Area a3(2.1f,3.1f);
}
