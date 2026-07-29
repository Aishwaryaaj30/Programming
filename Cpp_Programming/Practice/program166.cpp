#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        // Parameterized constructor with default value
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
    ArrayX *aObj1 = new ArrayX(5);
    
    // Function call

    delete aObj1;
    
    return 0;
}