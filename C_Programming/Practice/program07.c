#include<stdio.h>

int main()
{
    float fVAlue1 = 0.0f;           // To store First input
    float fValue2 = 0.0f;           // To store second input
    float fResult = 0.0f;           // To store the result

    printf("Enter first number: \n");
    scanf("%f", &fVAlue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fResult =  fVAlue1 + fValue2;   // Perfom the addition

    printf("Addition is : %f\n", fResult);

    return 0;
}