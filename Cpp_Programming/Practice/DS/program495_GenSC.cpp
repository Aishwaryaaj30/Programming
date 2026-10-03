#include<iostream>
using namespace std;

#pragma pack(1)

template <class T>
struct node
{
    T data;
    struct node <T> *next;
};

template <class T>
class SinglyCLL
{
    private:
        struct node <T> *first;
        struct node <T> *last;
        int iCount;

    public:
        SinglyCLL();

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
SinglyCLL <T> :: SinglyCLL()
{
    this -> first = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

template <class T>
void  SinglyCLL <T> :: Display()
{
    struct node <T> *temp = NULL;

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

template <class T>
int  SinglyCLL <T> :: Count()
{
    return iCount;
}

template <class T>
void  SinglyCLL <T> :: InsertFirst(T iNo)
{
    struct node <T> *newn = NULL;

    newn = new struct node <T>();

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

template <class T>
void  SinglyCLL <T> :: InsertLast(T iNo)
{
    struct node <T> *newn = NULL;

    newn = new struct node <T>();

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

template <class T>
void SinglyCLL <T> :: InsertAtPos(T iNo, int iPos)
{
    struct node <T> *newn = NULL;
    struct node <T> *temp = NULL;

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
        newn = new struct node <T>(
            
        );

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

template <class T>
void SinglyCLL <T> :: DeleteFirst()
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

template <class T>
void SinglyCLL <T> :: DeleteLast()
{
    struct node <T> *temp = NULL;

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

template <class T>
void SinglyCLL <T> :: DeleteAtPos(int iPos)
{
    struct node <T> *temp = NULL;
    struct node <T> *target = NULL;

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
    SinglyCLL <float> sobj;

    int iChoice = 0;
    float iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while(iChoice != 9)
    {   
        cout << "--------------------------------------------\n";
        cout << "1. Insert node at first position\n";
        cout << "2. Insert node at last position\n";
        cout << "3. Insert node at given position\n";
        cout << "4. Delete node at first position\n";
        cout << "5. Delete node at last position\n";
        cout << "6. Delete node at given position\n";
        cout << "7. Display the elements\n";
        cout << "8. Count the number of elements\n";
        cout << "9. Terminate the application\n";
        cout << "--------------------------------------------\n";
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
                cout << "Elements of the Linked List are : " << endl;
                sobj.Display();
                break;

            case 8:
                iRet = sobj.Count();
                cout << "Count to elements are : " << iRet << endl; 
                break;

            case 9:
                cout << "Thankyou for using Marvellous Infosystems Application" << endl;
                break;

            default:
                cout << "Invalid Choice..!" << endl;
        }
    }
    return 0;
}