#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Parameterized Constructor
        ArrayX(int X)
        {
            cout << "Inside Constructor";
            iSize = X;                  // Characteristics initialization
            Arr = new int[iSize];       // Resource Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout << "Inside Destructor";
            delete []Arr;               // Resource Deallocation
        }
};

int main()
{     
    ArrayX aObj1(5);    
    
    return 0;
}