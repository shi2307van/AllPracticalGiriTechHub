#include<stdio.h>
#include<conio.h>

void main(){
	int real_vol,change_vol;
	
	printf("\n Enter the real volume :- ");
	scanf("%d",&real_vol);
	
	printf("\n Enter the change the volume You want :-");
	scanf("%d",&change_vol);
	
	real_vol > change_vol ? printf("\n Decrease the volume %d point ",real_vol - change_vol):
		change_vol > real_vol ? printf("\n Increse the volume %d point",change_vol - real_vol):
			printf("wrong input");
		
	getch();
	
}
