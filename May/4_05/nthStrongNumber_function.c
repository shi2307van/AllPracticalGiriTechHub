#include<stdio.h>
#include<conio.h>

void main(){
	
	void nthStrongNo(int);

	int no;
	
	printf("\n Enter the number :- ");
	scanf("%d",&no);
	
	nthStrongNo(no);
	
}

void nthStrongNo(int no){
	int rem,f,sum,i,temp;

	for(i=1;i<=no;i++){
		temp=i;
		sum=0;
		while(temp>0){
			f=1;
			rem=temp%10;
		
//			for(j=1;j<=rem;j++)
//			{
//				f=f*j;
//			}
	 		while(rem>0){
	 			f=f*rem;
	 			rem--;
			 }
			sum=sum+f;
			temp=temp/10;
			
		}
		
	   if(i==sum)
	   {
	   	printf("%d\n",sum);
	   }
	}
}
