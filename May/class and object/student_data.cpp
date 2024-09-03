#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student{
	int rollno;
	char name[10];
	float per;
public:
	void setData(int r,char n[],float p){
		rollno=r;
		strcpy(name,n);
		per=p;
	}
	void showData(){
		cout<<"\n"<<rollno<<"\t"<<name<<"\t"<<per;
	}
	float getPer(){
		return per;
	}
};
int main(){
	int rno;
	char name[10];
	float per;
	
	Student s1,s2;
	
	cout<<"\n enter the rollno,name and percentage of student:-";
	cin>>rno>>name>>per;
	s1.setData(rno,name,per);
	cout<<"\n enter the rollno,name and percentage of student:-";
	cin>>rno>>name>>per;
	s2.setData(rno,name,per);
	
	if(s1.getPer() > s2.getPer())
	{
		s1.showData();
	}
	else{
		s2.showData();
	}
	
}
