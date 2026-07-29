#include<iostream>
using namespace std;

# pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{
    ArrayX aObj;

    cout << sizeof(aObj) << endl;   

    return 0;
}