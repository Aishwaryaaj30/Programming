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
    this -> first = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

void  SinglyCLL :: Display()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout << "| " << temp -> data << " | -> ";
        temp = temp -> next;
    }while(last -> next != temp);

    cout << endl;
}

int  SinglyCLL :: Count()
{
    return iCount;
}

void  SinglyCLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(this -> first == NULL && this -> last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
    }

    this -> last -> next = this -> first;
    this -> iCount++;
}

void  SinglyCLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(this -> first == NULL && this -> last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        last = newn;
    }

    this -> last -> next = this -> first;
    this -> iCount++;
}

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
    int iRet = 0;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Count of elements are : " << iRet << endl;

    return 0;
}