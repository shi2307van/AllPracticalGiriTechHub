#include<stdio.h>
#include<conio.h>

void main(){
	int Reverse(int);
	int Palindrome(int);
	int Power(int,int);
	int SumDigit(int);
	
	int no,ch,rev,pal,sum,base,index,pow;
	printf("\n Enter the number :-");
	scanf("%d",&no);
	
	do{
		
	printf("\n 1 ---> Reverse Number !!");
	printf("\n 2 ---> Palindrome Number !!");
	printf("\n 3 ---> Find the Power of number !!");
	printf("\n 4 ---> Find the sum of digits");
	printf("\n Enter your choice :- ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			rev = Reverse(no);
			printf("\n Reverse Number is :- %d",rev);
			break;	
		case 2:
			pal = Palindrome(no);
			if(no==pal){
				printf("\n Number is palindrome number !!!");
			}
			else{
				printf("\n Number is not palindrome number !!!");
			}
			break;
		case 3:
			printf("\n Enter the base :- ");
			scanf("%d",&base);
			printf("\n Enter the Index :- ");
			scanf("%d",&index);
			pow = Power(base,index);
			printf("\n Power of number :- %d",pow);
			break;
		case 4:
			sum = SumDigit(no);
			printf("\n Sum of digit is = %d ",sum);
			break;
		default:
			printf("\n Invalid choice !!");
	}
}while(ch<=4);
}

int Reverse(int x){
	int rem,rev;
	
	while(x!=0){
		rem = x%10;
		x = x/10;
		rev = rev*10+rem;
	}
	return rev;
}

int Palindrome(int x){
	int rev,rem;
	
	while(x!=0){
		rem = x%10;
		x = x/10;
		rev = rev*10+rem;
	}
	
	return rev;
}
int SumDigit(int x){
	int rem,sum=0;
	
	while(x!=0){
		rem = x%10;
		x = x/10;
		sum = sum + rem;
	}
	return sum;
}

int Power(int x,int y){
	int p=1,i;
	
	for(i=0;i<y;i++){
		p = p*x;
	}
	return p;
}
