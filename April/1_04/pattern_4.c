#include<stdio.h>
#include<conio.h>


int main() {
 
 int i,j;
  for ( i=1; i<=5; i++)
   {
     for ( j=1; j<=5; j++)
     {
       if (j==1 || i==j || i==5 )
       printf("%d",j);
       else
       printf(" ");
     }
    printf("\n");
   }
  return 0;
}

// *
// * *
// *   *
// *     *
// * * * * *

// hollow right half pyramid pattern
