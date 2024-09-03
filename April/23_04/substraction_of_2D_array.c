#include<stdio.h>
#include<conio.h>

void main(){
	int a[3][3],b[3][3],c[3][3],i,j,sum=0;
	
	printf("\n Enter the value of first matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter the value of second matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Element b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n display first matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
	}
	
	printf("\n display second matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			 c[i][j] = a[i][j] - b[i][j];
		}
	}
	
	printf("\n Display resultant matrix \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
	}
}
