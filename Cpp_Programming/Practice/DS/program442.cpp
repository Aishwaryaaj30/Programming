#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

#pragma pack(1)

class DoublyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyCLL :: DoublyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

void  DoublyCLL :: Display()
{}

int  DoublyCLL :: Count()
{
    return iCount;
}

void  DoublyCLL :: InsertFirst(int iNo)
{}

void DoublyCLL :: InsertLast(int iNo)
{}

void DoublyCLL :: InsertAtPos(int iNo, int iPos)
{}

void  DoublyCLL :: DeleteFirst()
{}

void  DoublyCLL :: DeleteLast()
{}

void  DoublyCLL :: DeleteAtPos(int iPos)
{}

int main()
{
    DoublyCLL dobj;
    
    return 0;
}