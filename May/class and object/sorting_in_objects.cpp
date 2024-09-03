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
	
	Student s[3],temp;
	
	
	for(int i=0;i<3;i++){
		cout<<"\n enter the rollno,name and percentage of student:-";
		cin>>rno>>name>>per;
		s[i].setData(rno,name,per);
	}
	
	cout<<"\n record is";
	for(int i=0;i<3;i++){
		s[i].showData();
	}
	for(int i=0;i<3;i++){
		for(int j=i;j<3;j++){
			if(s[i].getPer() > s[j].getPer()) {
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	cout<<"\n Sorted In Ascending Order By Percentage :- ";
	for(int i=0;i<3;i++){
		s[i].showData();
	}
}
