#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i%2==0){
				printf("* ");
			}
			else{
				printf("# ");
			}
		}
		printf("\n");
	}
}

//      #
//    *   *
//   #  #   #
// *   *  *   *

