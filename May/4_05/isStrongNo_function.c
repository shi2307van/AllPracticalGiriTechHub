#include<stdio.h>
#include<conio.h>

void main(){
	int isStrongNo(int);
	
	int no,strong;
	
	printf("\n Enter the number :- ");
	scanf("%d",&no);
	
	strong = isStrongNo(no);
	
	if(strong == no){
		printf("\n Number is strong number !!");
	}
	else{
		printf("\n Number is not strong number !!");
	}
	
}

int isStrongNo(int x){
	int f,i,rem,sum;
	
	rem = x%10;
	while(x!=0){
		f=1;
		i=1;
		
		while(i<=rem){
			f = f*i;
			i++;
		}
		
		sum = sum + f;
		x = x/10;
	}
	return sum;
}
