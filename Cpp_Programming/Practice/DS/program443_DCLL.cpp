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
{
    PNODE temp = NULL;

    temp = first;

    if(first == NULL && last == NULL)
    {
        return;
    }

    cout << " <=> ";
    do
    {
        cout << "| " << temp -> data << " | <=> ";
        temp = temp -> next;
    }while(temp != last -> next);

    cout << endl;
}

int  DoublyCLL :: Count()
{
    return iCount;
}

void  DoublyCLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn -> next = first;
        first -> prev = newn;
        first = newn;
    }

    last -> next = first;
    first->prev = last;

    iCount++;
}

void DoublyCLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        newn -> prev = last;
        last = newn;
    }

    last -> next = first;
    first->prev = last;

    iCount++;
}

void DoublyCLL :: InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCnt = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE();

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        newn -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
    }

    iCount++;
}

void  DoublyCLL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        free(last->next);

        last -> next = first;
        first -> prev = last;
    }

    iCount--;
}

void  DoublyCLL :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last -> prev;
        free(last -> next);

        last -> next = first;
        first -> prev = last;
    }

    iCount--;
}

void  DoublyCLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;

    int iCnt = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        return;
    }
    
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;
        
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;
    }

    iCount--;
}

int main()
{
    DoublyCLL dobj;

    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Count of elements is : " << iRet << endl;

    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout << "Count of elements is : " << iRet << endl;

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout << "Count of elements is : " << iRet << endl;

    dobj.InsertAtPos(105, 4);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Count of elements is : " << iRet << endl;

    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Count of elements is : " << iRet << endl;
    
    return 0;
}