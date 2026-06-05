// Accept N numbers from user and return product of all odd numbers.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Product
// Input            :   int
// Output           :   int
// Description      :   Perform Multiplication of all odd numbers.
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

int Product(
                int Arr[],
                int iLength
            )
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
}

/////////////////////////////////////////////////////////////////
//
// Application to display product of all odd numbers.
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product is %d\n", iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Elements : 15 66 3 70 10 88 
// Output : 45
//
// Input :  N        : 6
//          Elements : 44 66 72 70 10 88 
// Output : 1
//
/////////////////////////////////////////////////////////////////