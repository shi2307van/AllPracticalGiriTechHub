#include<stdio.h>
#include<conio.h>

void main(){
	int i,floor,ceil,no;

	
	int arr[6];
	
	
	for(i=0;i<=5;i++)
	{
		printf("\n ENter array element in sorted order arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(no=0;no<=10;no++)
	{
		ceil=floor=-1;
		for(i=0;i<=5;i++)
		{
			ceil=arr[i];
			if(arr[i]==no)
			{
				//ceil = arr[i];
				floor=no;
				break;
			}
			else if(no<arr[i])
			{
				if(i==0)
				{
					//ceil = arr[i];
					floor=-1;
				}
				else
				{
					//ceil = arr[i];
					floor=arr[i-1];
				}
				break;
			}
		}
		if(i==6)
		{
			ceil=-1;
			floor=arr[5];
		}
		printf("\n  No : %d , ceil : %d and floor : %d",no,ceil,floor);
	}
}
