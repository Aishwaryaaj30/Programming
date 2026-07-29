#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{
    ArrayX aObj;

    cout << sizeof(aObj) << endl;   //16 bytes

    return 0;
}