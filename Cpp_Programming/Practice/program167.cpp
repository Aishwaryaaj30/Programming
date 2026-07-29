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
};

int main()
{     
    ArrayX *aObj1 = new ArrayX;          // Default Constructor
    ArrayX *aObj2 = new ArrayX(15);      // Parameterized Constructor

    
    // Function call

    delete aObj1;
    delete aObj2;
    
    return 0;
}