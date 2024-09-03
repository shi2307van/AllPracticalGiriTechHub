#include<stdio.h>
#include<conio.h>
void main(){
	struct Player
	{
		int id,run,match;
		char name[20];
	};
	
	struct Player ply[5];
	int i;
	printf("\n Enter the id ,name,run and match of the player:-");
	for(i=0;i<2;i++){
		scanf("%d%s%d%d",&ply[i].id,&ply[i].name,&ply[i].run,&ply[i].match);
	}
	
	printf("\n Display the Details of Player :-");
	for(i=0;i<2;i++){
		printf("\n %s\t%d\t%d\t%d",ply[i].name,ply[i].id,ply[i].run,ply[i].match);
	}
}
