#include<iostream>
using namespace std;

template <class X>

X Maximum(X No1, X No2, X No3)
{
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{   
    cout << Maximum(21.5, 11.5, 18.9) << endl;
    cout << Maximum(21.5f, 11.5f, 18.9f) << endl;
    cout << Maximum(21, 11, 18) << endl;

    return 0;
}