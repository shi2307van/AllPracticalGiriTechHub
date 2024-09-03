#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class OccurenceApp{
	public:
	
	OccurenceApp(int a[5]){
		int even=0,odd=0;
		for(int i=0;i<5;i++){
			if(a[i]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
		cout<<"\n Number of even number :- "<<even<<"\n Number of odd number :- "<<odd<<endl;
	}
	OccurenceApp(char str[]){
		int con=0,vow=0;
		int len = strlen(str);
		for(int i=0;i<len;i++){
			if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
				vow++;
			}
			else{
				con++;
			}
		}
		cout<<"\n Number of consonent in string :- "<<con<<"\n Number of Vowel in string :- "<<vow;
	}
};
int main(){
	int arr[5] = {1,2,3,4,5};
	OccurenceApp op(arr);
	
	char str[]="shivani";
	OccurenceApp oa(str);
}

