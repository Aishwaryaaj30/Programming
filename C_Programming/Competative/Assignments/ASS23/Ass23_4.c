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
                int iRow,
                int iCol
            )
{
    int iCnt = 0;
    int iCnt2 = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if(iCnt2 % 2 == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
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
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input  : iRow = 3   iCol = 4
// Output : *	#	*	#	
//          *	#	*	#	
//          *	#	*	#
//
/////////////////////////////////////////////////////////////////