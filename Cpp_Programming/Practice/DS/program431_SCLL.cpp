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

void SinglyCLL :: InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCnt = 0;
    
    if((iPos < 1) || (iPos > this -> iCount + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == this -> iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new node;

        newn -> data = iNo;
        newn -> next = NULL;

        temp = this -> first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }

    this -> iCount++;
}

void  SinglyCLL :: DeleteFirst()
{
    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }
    else if(this -> first == this -> last)
    {
        delete this -> first;
        first = NULL;
        last = NULL;
    }
    else
    {
        this -> first = this -> first -> next;
        delete this -> last -> next;
    }

    this -> last -> next = this -> first;
    this -> iCount--;
}

void  SinglyCLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }
    else if(this -> first == this -> last)
    {
        delete this -> first;
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = this -> first;
        
        while(temp -> next != last)
        {
            temp = temp -> next;
        }

        delete last;
        last = temp;
    }

    this -> last -> next = this -> first;
    this -> iCount--;
}

void  SinglyCLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int iCnt = 0;
    
    if((iPos < 1) || (iPos > this -> iCount))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == this -> iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = this -> first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = target -> next;
        delete target;
    }

    this -> iCount--;
}

int main()
{
    SinglyCLL sobj;
    int iRet = 0;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Count of elements are : " << iRet << endl;

    sobj.DeleteFirst();
    sobj.Display();
    iRet = sobj.Count();
    cout << "Count of elements are : " << iRet << endl;

    sobj.DeleteLast();
    sobj.Display();
    iRet = sobj.Count();
    cout << "Count of elements are : " << iRet << endl;

    sobj.InsertAtPos(105, 4);
    sobj.Display();
    iRet = sobj.Count();
    cout << "Count of elements are : " << iRet << endl;

    sobj.DeleteAtPos(4);
    sobj.Display();
    iRet = sobj.Count();
    cout << "Count of elements are : " << iRet << endl;

    return 0;
}