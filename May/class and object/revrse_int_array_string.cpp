#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class ReverseApp
{
	public:
		int temp ,i,j;
		ReverseApp(int a[8]){
//			for(i=0,j=8-1;i<8/2;i++,j--){
//				temp = a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
			for(i=0;i<8;i++){
				temp = a[i];
				a[i]=a[8-1-i];
				a[8-1-i]=temp;
			}
			cout<<"\n Reverse Array:- ";
			for(int i=0;i<8;i++){
				cout<<" "<<a[i]<< " ";
			}
		}
		ReverseApp(char str[]){
			int len = strlen(str);
			for(int i=0;i<len/2;i++){
				char temp = str[i];
				str[i]=str[len-1-i];
				str[len-1-i] = temp;
			}
			cout<<"\n Reverse string :- "<<str;
		}
};

int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	ReverseApp revInt(arr);
	
	char str[]="hello";
	ReverseApp revStr(str);
}
