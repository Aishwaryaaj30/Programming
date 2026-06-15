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
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount);
            iCount++;

            if(iCount == 10)
            {
                iCount = 1;
            }
        }
        printf("\n");
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////
//
// Application to display pattern
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                    // Variable to take first input
    int iValue2 = 0;                    // Variable to take second input

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);          // Function Call

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input  : iRow = 4   iCol = 4
// Output : 1	2	3	4	
//          5	6	7	8	
//          9	1	2	3	
//          4	5	6	7
//
/////////////////////////////////////////////////////////////////