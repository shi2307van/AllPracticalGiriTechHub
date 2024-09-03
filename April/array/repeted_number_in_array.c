#include<stdio.h>
#include<conio.h>

void main(){
	int arr[10],frq[10];
	int i,j,count;
	
	printf("\n Enter the element :- ");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		//frq[i] = -1;
	}
	for(i=0;i<10;i++){
		count = 1;
		for(j=i+1;j<10;j++){
			if(arr[i] == arr[j]){
				count++;
				// not to count frequnecy of same element again.
				frq[j] = 0;
			}
		}
		if(frq[i]!=0){
			frq[i] = count;
		}
	}
	printf("\n Frequnecy of all the element of arry : \n ");
	for(i=0;i<10;i++){
		if(frq[i]!=0){
			printf("\n %d occures %d times \n ",arr[i],frq[i]);
		}
	}
}
