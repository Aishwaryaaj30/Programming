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
// Output           :   void
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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
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
// Output : *	*	*	*	*	
//          *	@	@	@	*	
//          *	@	@	@	*	
//          *	@	@	@	*	
//          *	*	*	*	*
//
/////////////////////////////////////////////////////////////////