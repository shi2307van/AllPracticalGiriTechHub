# include <stdio.h>
# include <stdlib.h>

int main()
{
    int dno, dkno, flg,num; // Variable declaration: dno stores the original number, dkno stores the number for manipulation, r stores the remainder, flg is a flag for checking

	printf("\n Enter the range :- ");
	scanf("%d",&num);
    flg = 0; // Initializing flag to 0

    // Printing information about the program
    printf("\n\n Find Duck Numbers between 1 to %d: \n",num);
    printf(" ----------------------------------------\n");
    printf(" The Duck numbers are: ");

    for (dkno = 1; dkno <= num; dkno++) // Loop to find Duck Numbers from 1 to 500
    {
        dno = dkno; // Storing the original number
        flg = 0; // Resetting flag for each number

        while (dno > 0) // Loop to check if the number is a Duck Number
        {
            if (dno % 10 == 0) // Checking if any digit of the number is zero
            {
                flg = 1; // Setting flag to 1 if zero is found
                break; // Exiting the loop if zero is found
            }
            dno /= 10; // Moving to the next digit in the number
        }

        if (dkno > 0 && flg == 1) // Checking if the original number is positive and a zero was found
        {
            printf("%d ", dkno); // Printing the Duck Number
        }
    }

    printf("\n"); // Print a new line after displaying all Duck Numbers between 1 and 500

    return 0; // Returning 0 to indicate successful execution
}

