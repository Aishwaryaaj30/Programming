#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int Size)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        cout << Arr[i] << endl;
    }
}

template <class T>
T Summation(T Arr[], int Size)
{
    int i = 0;
    T sum = 0;

    for(i = 0; i < Size; i++)
    {
        sum = sum + Arr[i];
    }

    return sum;
}

int main()
{   
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};
    int Crr[] = {10,20,30,40,50};

    Display(Brr, 5);
    cout << "Summation is : " << Summation(Brr, 5) << endl;

    Display(Crr, 5);
    cout << "Summation is : " << Summation(Crr, 5) << endl;

    return 0;
}