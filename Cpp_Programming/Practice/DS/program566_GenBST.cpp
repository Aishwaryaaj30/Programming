#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node <T> *lchild;
    struct node <T> *rchild;
};

template <class T>
class BST
{
    private:
        int iCount;
        struct node <T> *first;

        void InorderX(struct node <T> *);
        void PreorderX(struct node <T> *);
        void PostorderX(struct node <T> *);

        int CountLeafX(struct node <T> *);
        int CountParentX(struct node <T> *);

    public:
        BST();

        
        void Inorder();
        void Preorder();
        void Postorder();

        void Insert(T iNo);

        int Count();
        int CountLeaf();
        int CountParent();

        bool Search(T iNo);
};

template <class T>
BST <T> :: BST()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void BST <T> :: InorderX(node <T> *temp)
{
    if(temp != NULL)
    {
        InorderX(temp -> lchild);
        cout << temp -> data << endl;
        InorderX(temp -> rchild);
    }
}

template <class T>
void BST <T> :: Inorder()
{
    InorderX(first);
}

template <class T>
void BST <T> :: PreorderX(node <T> *temp)
{
    if(temp != NULL)
    {
        cout << temp -> data << endl;
        InorderX(temp -> lchild);
        InorderX(temp -> rchild);
    }
}

template <class T>
void BST <T> :: Preorder()
{
    PreorderX(first);
}

template <class T>
void BST <T> :: PostorderX(node <T> *temp)
{
    if(temp != NULL)
    {
        InorderX(temp -> lchild);
        InorderX(temp -> rchild);
        cout << temp -> data << endl;
    }
}

template <class T>
void BST <T> :: Postorder()
{
    PostorderX(first);
}

template <class T>
void BST <T> :: Insert(T iNo)
{
    struct node <T> *newn = NULL;
    struct node <T> *temp = NULL;

    newn = new struct node <T>();

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

template <class T>
int BST <T> :: Count()
{
    return iCount;
}

template <class T>
int BST <T> :: CountLeafX(node <T> *temp)
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

template <class T>
int BST <T> :: CountLeaf()
{
    return CountLeafX(first);
}

template <class T>
int BST <T> :: CountParentX(node <T> *temp)
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

template <class T>
int BST <T> :: CountParent()
{
    return CountParentX(first);
}

template <class T>
bool BST <T> :: Search(T iNo)
{
    struct node <T> *temp = NULL;
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
    BST <int> bobj;
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