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

Searching :: ~Searching()
{
    delete []Arr;
}

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    return 0;
}