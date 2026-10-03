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
};

SinglyCLL :: SinglyCLL()
{
    cout << "Inside Constructor\n";
    this -> first = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

int main()
{
    SinglyCLL sobj;
    
    return 0;
}