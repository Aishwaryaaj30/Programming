// Accept number of rows and columns from user and display below pattern.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Pattern
// Input            :   int, int
// Output           :   int
// Description      :   Display Pattern
// Date             :   15/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(
                int iRow,               // Variable to accept First input
                int iCol                // Variable to accept second input
            )
{
    int i = 0;                          // Loop Counter 1
    int j = 0;                          // Loop Counter 2
    int iCountEven = 0;                 // Variable to store Even numbers
    int iCountOdd = 0;                  // Variable to store Odd numbers

    for(i = 1; i <= iRow; i++)
    {
        int iCountEven = 2;
        int iCountOdd = 1;

        if((i % 2) != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", iCountEven);
                iCountEven = iCountEven + 2;
            }
            printf("\n");
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", iCountOdd);
                iCountOdd = iCountOdd + 2;
            }
            printf("\n");
        }
    }
}

/////////////////////////////////////////////////////////////////
//
// Application to display pattern
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                    // Variable to store first input
    int iValue2 = 0;                    // Variable to store second input

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);          // Function Call

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input  : iRow = 5   iCol = 5
// Output : 2	4	6	8	10	
//          1	3	5	7	9	
//          2	4	6	8	10	
//          1	3	5	7	9	
//          2	4	6	8	10
//
/////////////////////////////////////////////////////////////////