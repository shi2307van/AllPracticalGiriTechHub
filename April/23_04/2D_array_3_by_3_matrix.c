#include<stdio.h>
#include<conio.h>

void main(){
	int a[3][3],i,j,sum;
	
	printf("\n Enter the values in matrix \n");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			scanf("\n %d",&a[i][j]);
		}
	}
	
	printf("\n Display the matrix : \n");
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf(" = %d\n",sum);
	}
1
}
