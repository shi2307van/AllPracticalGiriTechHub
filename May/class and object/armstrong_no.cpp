#include<iostream>
#include<conio.h>
using namespace std;

class Armstrong{
	int n,flag;
	public:
	void setData(int x){
		n=x;
	}
	void checkArmstrong(){
		int count,temp;
		temp=n;
		count=0;
		while(temp>0){
			count++;
			temp=temp/10;
		}
		cout<<"\nNumber of digit are "<<count;
		int sum=0,p,rem,i;
		temp=n;
		while(temp>0){
			rem=temp%10;
			i=1;
			p=1;
			while(i<=count){
				p=p*rem;
				i++;
			}
			sum=sum+p;
			temp=temp/10;
		}
		if(sum==n){
			flag=0;
		}
		else{
			flag=1;
		}
	}
	void show(){
		if(flag==0){
			cout<<"\nArmstrong Number....";
		}
		else{
			cout<<"\nNot a armstrong number ...";
		}
	}
};
int main(){
	int num;
	Armstrong a;
	cout<<"\nEnter the number :- ";
	cin>>num;
	a.setData(num);
	a.checkArmstrong();
	a.show();
}
