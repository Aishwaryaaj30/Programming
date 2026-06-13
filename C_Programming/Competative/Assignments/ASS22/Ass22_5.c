// Accept number from user and display below pattern

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Pattern
// Input            :   int
// Output           :   void
// Description      :   Display Pattern
// Date             :   12/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(
                int iNo                 // Variable to accept input
            )
{
    int iCnt = 0;                       // Loop Counter

    for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
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
    int iValue = 0;                     // Variable to take input

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);                    // Function Call

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input  : 8
// Output : 2	4	6	8	10	12	14	16
//
/////////////////////////////////////////////////////////////////