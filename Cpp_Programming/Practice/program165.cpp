#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX()
        {
            iSize = 5;                 
            Arr = new int[iSize];     
        }

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
    ArrayX *aObj1 = new ArrayX;         // Default Constructor
    ArrayX *aObj2 = new ArrayX(5);      // Parameterized Constructor

    
    // Function call

    delete aObj1;
    delete aObj2;
    
    return 0;
}