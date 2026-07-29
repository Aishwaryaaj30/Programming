#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)
        {

        }
};

int main()
{
    ArrayX aObj(5);    

    cout << sizeof(aObj) << endl;   

    return 0;
}