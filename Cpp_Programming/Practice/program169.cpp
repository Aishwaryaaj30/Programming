#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        // Parameterized constructor with default argument
        ArrayX(int X = 5)
        {
            iSize = X;                 
            Arr = new int[iSize];     
        }

        ~ArrayX()
        {
            delete []Arr;          
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter the elements : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout << "Elements of the array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << endl;
            }
        }

        int Summation()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{     
    ArrayX *aObj = NULL;      
    int iLength = 0, iRet = 0;;

    cout << "Enter the number of elements : \n";
    cin >> iLength;

    aObj = new ArrayX(iLength);

    aObj -> Accept();
    aObj -> Display();
    
    iRet = aObj -> Summation();
    cout << "summation is " << iRet << endl;
    
    delete aObj;
    
    return 0;
}