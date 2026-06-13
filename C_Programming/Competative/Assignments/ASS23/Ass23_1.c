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
// Output           :   void (*)
// Description      :   Display Pattern
// Date             :   12/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(
                int iRow,               // Variable to accept First input
                int iCol                // Variable to accept second input
            )
{
    int iCnt = 0;                       // Loop Counter 1
    int iCnt2 = 0;                      // Loop Counter 2

    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        for(iCnt2 = 0; iCnt2 < iCol; iCnt2++)
        {
            printf("*\t");
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
// Input  : iRow = 4   iCol = 3
// Output : *	*	*	
//          *	*	*	
//          *	*	*	
//          *	*	*
//
/////////////////////////////////////////////////////////////////