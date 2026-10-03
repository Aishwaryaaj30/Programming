#include<stdio.h>

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("Enter first number : ");
    scanf("%d", &iNo1);

    printf("Enter second number : ");
    scanf("%d", &iNo2);

    iAns = iNo1 & iNo2;
    printf("AND : %d\n", iAns);

    iAns = iNo1 | iNo2;
    printf("OR : %d\n", iAns);

    iAns = iNo1 ^ iNo2;
    printf("XOR : %d\n", iAns);

    return 0;
}