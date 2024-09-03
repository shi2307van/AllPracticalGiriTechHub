#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,arr[4],fir,sec,temp;
	
	printf("\n Enter the Element :- ");
	for(i=0;i<4;i++){ //input
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<4;i++)//sorting
	{
		for(j=i+1;j<4;j++)
		{
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
	printf("\n Display sorting array :- \n");
	for(i=0;i<4;i++){
		printf("%d\t",arr[i]);
	}
	
	printf("\n Missing element :- \n");//missing element
	for(i=0;i<4;i++){
		fir = arr[i];
		sec = arr[i+1];
		for(j=fir+1;j<sec;j++){
			printf("%d\t",j);
		}
	}
}
