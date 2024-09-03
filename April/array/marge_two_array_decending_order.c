#include<stdio.h>
#include<conio.h>
 
void main(){
 	int arr1[3],arr2[3],arr3[6];
 	int s1,s2,s3;
 	int i,j,k;
 	
 	printf("\n Marge two array of same size sorted in decending order\n");
 	printf("___________________________________________________________");
 	printf("\n Input the number of elements to be stored in the first array :");
 	scanf("%d",&s1);
 	
 	printf("\n input %d elements in the arry :\n ",s1);
 	
 	for(i=0;i<s1;i++){
 		printf("\n Element - %d :",i);
 		scanf("%d",&arr1[i]);
	}
	 
	printf("\n Input the number of elements to be stored in the second array :");
 	scanf("%d",&s2);
 	
 	printf("\n input %d elements in the arry :\n ",s2);
 	
 	for(i=0;i<s2;i++){
 		printf("\n Element - %d :",i);
 		scanf("%d",&arr2[i]);
	}
	 
	 s3 = s2+s1;
	 
	for(i=0;i<s1;i++){
	 	arr3[i] = arr1[i];
	}
	for(j=0;j<s2;j++){
	 	arr3[i] = arr2[j];
	 	i++;
	 }
	 
	for(i=0;i<s3;i++){
	 	for(k=0;k<s3;k++){
	 		if(arr3[k] > arr3[k+1]){
	 			j = arr3[k+1];
	 			arr3[k+1] = arr3[k];
	 			arr3[k] = j;
			 }
		 }
	}
	for(i=0;i<s3;i++){
	 	printf("%d",arr3[i]);
	}
	printf("\n");
}
