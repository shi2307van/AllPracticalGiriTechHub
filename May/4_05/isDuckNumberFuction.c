#include<stdio.h>
#include<conio.h>

void main(){
	int isDuckNo(int);
	
	int no,duck;
	
	printf("\n Enter the number :-");
	scanf("%d",&no);
	
	duck = isDuckNo(no);
	printf("\n duck %d ",duck);
	if(duck!=1){
		printf("\n Number is not duck number !!!");
	}
	else{
		printf("\n Number is duck number !!!");
	}
}

int isDuckNo(int x){
	int rem,i,flag=0;
	
	while(x!=0){
		rem = x%10;
		
		if(rem==0){
			flag=1;
			break;
		}
		x = x/10;
	}
	return flag;
}
