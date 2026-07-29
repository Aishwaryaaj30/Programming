#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Default Constructor
        ArrayX()    
        {
            
        }

        // Parameterized Constructor
        ArrayX(int X)
        {

        }
};

int main()
{
    ArrayX aObj1;       //Default
    ArrayX aObj2(5);    // Parameterized

    cout << sizeof(aObj1) << endl;   

    return 0;
}