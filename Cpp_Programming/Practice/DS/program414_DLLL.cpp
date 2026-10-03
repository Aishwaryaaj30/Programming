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

class DoublyLL
{
    private:                    
        PNODE first;
        int iCount;

    public:
        DoublyLL();                             // function declaration

        void Display();

        int Count();
        
        void InsertFirst(int iNo);
        
        void InsertLast(int iNo);
        
        void InsertAtPos(int iNo, int iPos);
        
        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(int iPos);
         
};

DoublyLL :: DoublyLL()                          // Function defination
{
    this -> first = NULL;
    this -> iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;

    temp = this -> first;

    cout << "\nNULL <=> ";

    while(temp != NULL)
    {
        cout << "| " << temp -> data << " | <=> ";
        temp = temp -> next;
    }

    cout << "NULL" << endl;
}

int DoublyLL :: Count()
{
    return this -> iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(NULL == this -> first)
    {
        this -> first = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first -> prev = newn;
        this -> first = newn;
    }

    this -> iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(NULL == this -> first)
    {
        this -> first = newn;
    }
    else
    {
        temp = this -> first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;
    }

    this -> iCount++;
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
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
        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = this -> first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
    }

    this -> iCount++;
}

void DoublyLL :: DeleteFirst()
{
    if(this -> first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete this -> first;
        this -> first = NULL;
    }
    else
    {
        this -> first = this -> first -> next;
        delete this -> first -> prev;
        this -> first -> prev = NULL;
    }

    this -> iCount--;
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this -> first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete this -> first;
        this -> first = NULL;
    }
    else
    {
        temp = this -> first;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;
    }

    this -> iCount--;
}

void DoublyLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;

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

        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
        temp -> next -> prev = temp;
    }

    this -> iCount--;
}

int main()
{  
    DoublyLL sobj;

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

                sobj.InsertFirst(iValue);
                break;
            
            case 2:
                cout << "Enter the value : ";
                cin >> iValue;

                sobj.InsertLast(iValue);
                break;

            case 3:
                cout << "Enter the value : ";
                cin >> iValue;

                cout << "Enter the position : ";
                cin >> iPosition;

                sobj.InsertAtPos(iValue, iPosition);
                break;
            
            case 4:
                sobj.DeleteFirst();
                break;

            case 5:
                sobj.DeleteLast();
                break;
            
            case 6:
                cout << "Enter the position : ";
                cin >> iPosition;

                sobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout << "Elements of the Linked List are :" << endl;
                sobj.Display();
                break;
            
            case 8:
                iRet = sobj.Count();
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