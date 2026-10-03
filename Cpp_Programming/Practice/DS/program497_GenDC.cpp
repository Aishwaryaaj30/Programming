#include<iostream>
using namespace std;

#pragma pack(1)

template <class T>
struct node
{
    T data;
    struct node <T> *next;
    struct node <T> *prev;
};

#pragma pack(1)

template <class T>
class DoublyCLL
{
    private:
        struct node <T> *first;
        struct node <T> *last;
        int iCount;

    public:
        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyCLL <T> :: DoublyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCLL <T> :: Display()
{
    struct node <T> *temp = NULL;

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

template <class T>
int DoublyCLL <T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyCLL <T> :: InsertFirst(T iNo)
{
    struct node <T> *newn = NULL;

    newn = new struct node <T>();

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

template <class T>
void DoublyCLL <T> :: InsertLast(T iNo)
{
    struct node <T> *newn = NULL;

    newn = new struct node <T>();

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

template <class T>
void DoublyCLL <T> :: InsertAtPos(T iNo, int iPos)
{
    struct node <T> *newn = NULL;
    struct node <T> *temp = NULL;

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
        newn = new struct node <T>();

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

template <class T>
void DoublyCLL <T> :: DeleteFirst()
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

template <class T>
void DoublyCLL <T> :: DeleteLast()
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

template <class T>
void DoublyCLL <T> :: DeleteAtPos(int iPos)
{
    struct node <T> *temp = NULL;

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
    DoublyCLL <int> dobj;

    int iRet = 0;
    int iValue = 0;
    int iPosition = 0;
    int iChoice = 0;

    while(iChoice != 9)
    {
        cout << "----------------------------------------------\n";
        cout << "1. Insert at first position\n";
        cout << "2. Insert at last position\n";
        cout << "3. Insert at given position\n";
        cout << "4. Delete at first position\n";
        cout << "5. Delete at last position\n";
        cout << "6. Delete at given position\n";
        cout << "7. Display the elements\n";
        cout << "8. Count the number of elements\n";
        cout << "9. Terminate the application\n";
        cout << "----------------------------------------------\n";

        cout << "Enter your choice : ";
        cin >> iChoice;

        switch(iChoice)
        {
            case 1:
                cout << "Enter the value : ";
                cin >> iValue;

                dobj.InsertFirst(iValue);
                break;
            
            case 2:
                cout << "Enter the value : ";
                cin >> iValue;

                dobj.InsertLast(iValue);
                break;

            case 3:
                cout << "Enter the value : ";
                cin >> iValue;

                cout << "Enter the position : ";
                cin >> iPosition;

                dobj.InsertAtPos(iValue, iPosition);
                break;
            
            case 4:
                dobj.DeleteFirst();
                break;

            case 5:
                dobj.DeleteLast();
                break;
            
            case 6:
                cout << "Enter the position : ";
                cin >> iPosition;

                dobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout << "Elements of the Linked List are :" << endl;
                dobj.Display();
                break;
            
            case 8:
                iRet = dobj.Count();
                cout << "Count of elements are : " << iRet << endl;
                break;

            case 9:
                cout << "Thankyou for using Marvellous Infosystems Application\n";
                break;
            
            default:
                cout << "Invalid choice..." << endl;
        }
    }

    return 0;
}