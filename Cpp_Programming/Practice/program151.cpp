#include<iostream>
using namespace std;

class ArrayX
{
    // Access Specifier of summation PRIVATE
    int Summation(int Arr[], int iSize)
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
};

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;
    ArrayX aObj;

    cout << "Enter the number of elements :\n";
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter the elements :\n";

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        cin >> Brr[iCnt];
    }

    int iRet = aObj.Summation(Brr, iLength);

    cout << "Summation is : " << iRet << endl;

    delete []Brr;

    return 0;
}