// Doubly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;                  // $
};

void Display(struct node * first)
{
    printf("\nNULL <=> ");

    while(first != NULL)
    {
        printf("| %d | <=> ", first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

int Count(struct node * first)
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
    newn -> prev = NULL;                // $

    if(NULL == *first)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        (*first) -> prev = newn;        // $
        *first = newn;
    }
}

void InsertLast(struct node ** first, int iNo)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;                // $

    if(NULL == *first)
    {
        *first = newn;
    }
    else
    {   
        temp = *first;

        while(temp -> next != NULL)
        { 
            temp = temp -> next; 
        }
        temp -> next = newn;
        newn -> prev = temp;            // $
    }
}

void InsertAtPos(struct node ** first, int iNo, int iPos)
{
    struct node * newn = NULL;
    struct node * temp = NULL;
    int iCount = 0;
    int iCnt = 0;

    iCount = Count(*first);

    // Filter
    if((iPos < 1) || (iPos > iCount + 1))
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
        newn -> prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;        // $
        temp -> next = newn;
        newn -> prev = temp;                // $
    }
}

void DeleteFirst(struct node ** first)
{
    if(NULL == *first)
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
        *first = (*first) -> next;
        free((*first) -> prev);         // $
        (*first) -> prev = NULL;        // $
    }
}

void DeleteLast(struct node ** first)
{
    struct node * temp = NULL;

    if(NULL == *first)
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

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);
        temp -> next = NULL;
    }
}

void DeleteAtPos(struct node ** first, int iPos)
{
    int iCount = 0;
    int iCnt = 0;
    struct node * temp = NULL;

    iCount = Count(*first);

    // Filter
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

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);         // $
        temp -> next -> prev = temp;        // $
    }
}

int main()
{
    struct node * head = NULL;
    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    InsertAtPos(&head, 105, 4);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);
    
    DeleteAtPos(&head, 4);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}