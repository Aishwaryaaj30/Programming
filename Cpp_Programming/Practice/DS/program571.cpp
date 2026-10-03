#include<iostream>
using namespace std;

class Searching
{
    private:
        int *Arr;
        int iSize;

    public:
        Searching(int iNo);
        ~Searching();

        void Accept();
        void Display();

        bool LinearSearch(int iNo);
        bool BiDirectionalSearch(int iNo);
};

Searching :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

void Searching :: Accept()
{
    int iCnt = 0;

    cout << "Enter the elements : " << endl;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void Searching :: Display()
{
    int iCnt = 0;

    cout << "Elements of the array are : " << endl;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << endl;
    }
}

bool Searching :: LinearSearch(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

bool Searching :: BiDirectionalSearch(int iNo)
{
    bool bFlag = false;
    int iStart = 0;
    int iEnd = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd) 
    {
        if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }

        iStart++;
        iEnd--;
    }

    return bFlag;
}

Searching :: ~Searching()
{
    delete []Arr;
}

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    if(sobj.LinearSearch(30) == true)
    {
        cout << "Element present" << endl;
    }
    else
    {
        cout << "There is no such element" << endl;
    }

    if(sobj.BiDirectionalSearch(30) == true)
    {
        cout << "Element present" << endl;
    }
    else
    {
        cout << "There is no such element" << endl;
    }

    return 0;
}