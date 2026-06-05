/* Write a program which accept number from user and return 
   difference between summation of all its factors and non factors
*/

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : FactDiff
//  Input :         int
//  Output :        int
//  Description :   perform difference between summation of all its factors and non factors
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   int iDiff = 0;

   for(iCnt = 1 ; iCnt < iNo ; iCnt++)
   {
      if((iNo % iCnt) == 0)
      {
         iSum = iSum + iCnt;
      }
      else
      {
         iDiff = iDiff + iCnt;
      }
   }

   return iSum - iDiff;
}

///////////////////////////////////////////////////////////
//
//  Application to display perform difference between summation 
//  of all its factors and non factors
//
///////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number : ");
   scanf("%d", &iValue);

   iRet = FactDiff(iValue);

   printf("%d", iRet);

   printf("\n");

   return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     12
//  Output :    -34  (16 - 50)
//
//  Input :     13
//  Output :    -76
//
//  Input :     10
//  Output :    -29
//
// Complexity : O(n)
//
///////////////////////////////////////////////////////////