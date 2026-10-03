#include<stdio.h>
#include<stdlib.h>

#define pragma pack(1);

struct node
{
    int data;
    struct node *next;
};

void Display(struct node * first)
{
   while(first != NULL)     
   {
    printf("| %d | -> ", first -> data);
    first = first -> next;
   }
   printf("NULL\n");
}

int  Count(struct node * first)
{
    int iCount = 0;

    while(first != NULL)    
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}

void InsertFirst(struct node ** first, int iNo)
{
    struct node * newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn -> data = iNo;
    newn -> next = NULL;

    if(NULL == *first)         
    {
        *first = newn;
    }
    else                       
    {
        newn -> next = *first;
        *first = newn;
    }
}

void InsertLast(struct node ** first, int no)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)   
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
}

void InsertAtPos(struct node ** first, int iNo, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    struct node * newn = NULL;
    struct node * temp = NULL;

    iCount = Count(*first);

    //Filter
    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid position");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first, iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first, iNo);
    }
    else
    {
        newn = (struct node *)malloc(sizeof(struct node));

        newn -> data = iNo;
        newn -> next = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteFirst(struct node ** first)
{
    struct node * temp = NULL;

    if(*first == NULL)                  
    {
        return;
    }
    else if((*first) -> next == NULL)     
    {
        free(*first);
        *first = NULL;
    }
    else                                
    {
        temp = *first;
        *first = (*first) -> next;
        free(temp);
    }
}

void DeleteLast(struct node ** first)
{
    struct node * temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) ->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next->next != NULL) 
        {
            temp = temp ->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(struct node ** first, int iPos)
{
    int iCount = 0;
    int iCnt = 0;

    struct node * temp = NULL;
    struct node * target = NULL;

    iCount = Count (*first);

    //Filter
    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid position");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < iCount; iCnt++)
        {
            temp = temp -> next;
        }
        target = temp -> next;

        temp -> next = target -> next;

        free(target);
    }
}

int main()
{
    struct node * head = NULL;
    int iRet = 0;
    
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n\n", iRet);

    InsertLast(&head, 111);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n\n", iRet);

    DeleteFirst(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n\n", iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n\n", iRet);

    InsertAtPos(&head, 105, 4);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n\n", iRet);

    DeleteAtPos(&head, 4);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n\n", iRet);

    return 0;
}