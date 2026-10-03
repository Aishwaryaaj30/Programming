#include<stdio.h>

// Call by value

void Swap(int iNo1, int iNo2)
{
    int temp = 0;

    iNo1 = temp;
    iNo2 = iNo1;
    iNo2 = temp;  
}

int main()
{
    int i = 11;
    int j = 21;

    Swap(i,j);

    printf("%d\n", i);
    printf("%d\n", j);
    
    return 0;
}