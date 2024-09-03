#include<stdio.h>
#include<conio.h>

void main(){
	void nthPerfectNo(int);
	
	int no;
	printf("\n Enter the number :-");
	scanf("%d",&no);
	
	printf("\n Display perfect number 1 to %d",no);
	
	nthPerfectNo(no);
}

void nthPerfectNo(int no){
	int i,j,sum;
	
	for(i=1;i<=no;i++){
		sum = 0;
		for(j=1;j<i;j++){
			if(i%j==0){
				sum = sum + j;
			}
		}
		if(sum==i){
			printf("\n %d ",sum);
		}
	}
	
}
