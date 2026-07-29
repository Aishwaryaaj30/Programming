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
            cout << "Inside Constructor" << endl;
            iSize = X;                  // Characteristics initialization
            Arr = new int[iSize];       // Resource Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout << "Inside Destructor" << endl;
            delete []Arr;               // Resource Deallocation
        }
};

int main()
{     
    // static memory allocation of objevt
    // ArrayX aObj1(5);
    
    ArrayX *aObj1 = new ArrayX(5);

    return 0;
}