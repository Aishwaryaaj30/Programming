#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int X)
        {
            iSize = X;                 
            Arr = new int[iSize];     
        }

        ~ArrayX()
        {
            delete []Arr;          
        }
};

int main()
{     
    ArrayX *aObj1 = new ArrayX(5);

    // Logic (Function call)
    cout << aObj1 -> iSize << endl;     // Error

    aObj1 -> iSize = 0;                 // Error

    aObj1 -> Arr = NULL;                // Error
    
    delete aObj1;
    
    return 0;
}