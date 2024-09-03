#include<iostream>
#include<conio.h>
using namespace std;

class ArrayOperation
{
	public:
		ArrayOperation(int a[]){
			for(int i=0;i<5;i++){
				for(int j=i+1;j<5;j++){
					if(a[i]>a[j]){
						int temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			cout<<"Sorting array :- ";
			for(int i=0;i<5;i++){
				cout<<a[i];
			}
		}
		
		ArrayOperation(int b[] ,int c[]){
			int d[10],k;
			for(int i=0;i<5;i++){
				d[k] = b[i];
				k++;
			}
			for(int i=0;i<5;i++){
				d[k] = c[i];
				k++;
			}
			cout<<"\n Merged Array :- ";
			for(int i=0;i<10;i++){
				cout<<" "<<d[i]<<" ";
			}
		}
};
int main(){
	int arr[5]={4,2,7,9,3};
	ArrayOperation ao(arr);
	
	int a1[5] = {1,2,3,4,5};
	int a2[5] = {6,7,8,9,10};
	ArrayOperation ap(a1,a2);
}
