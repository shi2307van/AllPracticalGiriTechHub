#include<stdio.h>

int main(){

    int num,i,n,count;
    printf("Enter start and end value : ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 1;

         for(i=2;i<=num/2;i++)
		 {
             if(num%i==0)
			 {
                 count=0;
                 break;
             }
            
        }
        
         if(count)
             printf("%d ",num);
    }
  
   return 0;
}
