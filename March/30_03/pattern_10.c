//#include<stdio.h>
//#include<conio.h>
//
//void main(){
//	int i,j;
//	
//	for(i=1;i<=3;i++){
//		for(j=1;j<=5;j++){
//			 if (i > 0 && i < 5 - 1 && j > 0 
//                && j < 5 - 1) { 
//                printf("  "); 
//            } 
//            else { 
//                printf("*"); 
//            }
//		}
//		printf("\n");
//	}
//}

// * * * * * i=1 j=1
// *       * i=2 j=2
// * * * * * i=3 j=3

#include <stdio.h> 
  
int main() 
{ 
    int i,j; 
  
    // outer loop to iterator through each row 
    for ( i = 1; i <= 3; i++) { 
  
        // inner loop to print number in each row 
        for ( j = 1; j <= 5; j++) { 
            // statement to check boundry condition 
            if (i==1||j==5||i==3||j==1) { 
                printf("*"); 
            } 
            else { 
                printf(" "); 
            } 
        } 
        printf("\n"); 
    } 
    return 0; 
}
