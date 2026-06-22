///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input :         float, float
//  Output :        float
//  Description :   Performs addition of two floats
//  Date :          08/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

float AddTwoNumbers(
                    float fNo1,     // First input
                    float fNo2      // second input
                   )
{
    float fAns = 0.0f;              // Variable to store result

    fAns = fNo1 + fNo2;             // Perform addition

    return fAns;
}

///////////////////////////////////////////////////////////
//
//  Application to perform addition of two float values
//
///////////////////////////////////////////////////////////

int main()
{
    float fVAlue1 = 0.0f;          // To store First input
    float fValue2 = 0.0f;          // To store second input
    float fResult = 0.0f;          // To store the result          

    printf("Enter first number: \n");
    scanf("%f", &fVAlue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fResult =  AddTwoNumbers(fVAlue1, fValue2);     // Function call

    printf("Addition is : %f\n", fResult);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     10.0    11.0
//  Output :    21.0
//
///////////////////////////////////////////////////////////