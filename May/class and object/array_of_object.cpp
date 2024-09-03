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
	int rno,max,index;
	char name[10];
	float per;
	
	Student s[2];
	
	
	for(int i=0;i<2;i++){
		cout<<"\n enter the rollno,name and percentage of student:-";
		cin>>rno>>name>>per;
		s[i].setData(rno,name,per);
	}
	max=s[0].getPer();
	index=0;
	cout<<"\n record is";
	for(int i=0;i<2;i++){
		s[i].showData();
	}
	for(int i=0;i<2;i++){
		if(max<s[i].getPer()){
			max=s[i].getPer();
			index=i;
		}
	}
	cout<<"\n Higest Percentage :- ";
	s[index].showData();
}
