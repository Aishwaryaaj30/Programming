#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        SinglyCLL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCLL :: SinglyCLL()
{
    cout << "Inside Constructor\n";
    this -> first = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

void  SinglyCLL :: Display()
{}

int  SinglyCLL :: Count()
{
    return iCount;
}

void  SinglyCLL :: InsertFirst(int iNo)
{}

void  SinglyCLL :: InsertLast(int iNo)
{}

void InsertAtPos(int iNo, int iPos)
{}

void  SinglyCLL :: DeleteFirst()
{}

void  SinglyCLL :: DeleteLast()
{}

void  SinglyCLL :: DeleteAtPos(int iPos)
{}

int main()
{
    SinglyCLL sobj;
    
    return 0;
}