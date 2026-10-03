#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;

class BST
{
    private:
        int iCount;
        PNODE first;

        void InorderX(PNODE);
        void PreorderX(PNODE);
        void PostorderX(PNODE);

        int CountLeafX(PNODE);
        int CountParentX(PNODE);

    public:
        BST();

        
        void Inorder();
        void Preorder();
        void Postorder();

        void Insert(int iNo);

        int Count();
        int CountLeaf();
        int CountParent();

        bool Search(int iNo);
};

BST :: BST()
{
    first = NULL;
    iCount = 0;
}

void BST :: InorderX(PNODE temp)
{
    if(temp != NULL)
    {
        InorderX(temp -> lchild);
        cout << temp -> data << endl;
        InorderX(temp -> rchild);
    }
}

void BST :: Inorder()
{
    InorderX(first);
}

void BST :: PreorderX(PNODE temp)
{
    if(temp != NULL)
    {
        cout << temp -> data << endl;
        InorderX(temp -> lchild);
        InorderX(temp -> rchild);
    }
}

void BST :: Preorder()
{
    PreorderX(first);
}

void BST :: PostorderX(PNODE temp)
{
    if(temp != NULL)
    {
        InorderX(temp -> lchild);
        InorderX(temp -> rchild);
        cout << temp -> data << endl;
    }
}

void BST :: Postorder()
{
    PostorderX(first);
}

void BST :: Insert(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE();

    newn -> data = iNo;
    newn -> lchild = NULL;
    newn -> rchild = NULL;

    if(first == NULL)
    {
        first = newn;
        iCount++;
    }
    else
    {
        temp = first;

        while(1)
        {
            if(iNo > temp -> data)
            {
                if(temp -> rchild == NULL)
                {
                    temp -> rchild = newn;
                    iCount++;
                    break;
                }
                temp = temp -> rchild;
            }
            else if(iNo < temp -> data)
            {
                if(temp -> lchild == NULL)
                {
                    temp -> lchild = newn;
                    iCount++;
                    break;
                }
                temp = temp -> lchild;
            }
            else if(iNo == temp -> data)
            {
                delete(newn);
                break;
            }
        }
    }
}

int BST :: Count()
{
    return iCount;
}

int BST :: CountLeafX(PNODE temp)
{
    static int iCount = 0;

    if(temp != NULL)
    {
        if(temp -> lchild == NULL && temp -> rchild == NULL)
        {
            iCount++;
        }
        CountLeafX(temp -> rchild);
        CountLeafX(temp -> lchild);
    }
    return iCount;
}

int BST :: CountLeaf()
{
    return CountLeafX(first);
}

int BST :: CountParentX(PNODE temp)
{
    static int iCount = 0;

    if(temp != NULL)
    {
        if(temp -> lchild != NULL || temp -> rchild != NULL)
        {
            iCount++;
        }
        CountParentX(temp -> rchild);
        CountParentX(temp -> lchild);
    }
    return iCount;
}

int BST :: CountParent()
{
    return CountParentX(first);
}

bool BST :: Search(int iNo)
{
    PNODE temp = NULL;
    bool bFlag = false;

    temp = first;

    while(temp != NULL)
    {
        if(iNo == temp -> data)
        {
            bFlag = true;
            break;
        }
        else if(iNo > temp -> data)
        {
            temp = temp -> rchild;
        }
        else if(iNo < temp -> data)
        {
            temp = temp -> lchild;
        }
    }

    return bFlag;
}

int main()
{
    BST bobj;
    int iRet = 0;

    bobj.Insert(11);
    bobj.Insert(5);
    bobj.Insert(17);
    bobj.Insert(21);
    bobj.Insert(4);
    bobj.Insert(7);
    bobj.Insert(15);

    cout << "Inorder Traversal :" << endl;
    bobj.Inorder();

    cout << endl << "Preorder Traversal :" << endl;
    bobj.Preorder();

    cout << endl << "Postorder Traversal :" << endl;
    bobj.Postorder();

    iRet = bobj.Count();
    cout << "Number of nodes are : " << iRet << endl;

    iRet = bobj.CountLeaf();
    cout << "Number of leaf nodes are : " << iRet << endl;

    iRet = bobj.CountParent();
    cout << "Number of parent nodes are : " << iRet << endl;

    if(bobj.Search(7) == true)
    {
        cout << "Element is there in BST" << endl;
    }
    else
    {
        cout << "There is no such element in BST" << endl;
    }

    return 0;
}