#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void Display(struct node * first, struct node * last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    printf("\n <=> ");

    do
    {
        printf("| %d | <=> ", first -> data);
        first = first -> next;
    }while(first != last -> next);

    printf("\n");
}

int Count(struct node * first, struct node * last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return 0;
    }

    do
    {
        iCount++;
        first = first -> next;
    }while(first != last -> next);

    return iCount;
}

void InsertFirst(struct node ** first, struct node ** last, int iNo)
{
    struct node * newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn -> next = *first;
        (*first) -> prev = newn;
        *first = newn;
    }

    (*last) -> next = *first;
    (*first) -> prev = *last;
}

void InsertLast(struct node ** first, struct node ** last, int iNo)
{
    struct node * newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (*last) -> next = newn;
        newn -> prev = *last;
        *last = newn;
    }

    (*last) -> next = *first;
    (*first) -> prev = *last;
}

void InsertAtPos(struct node ** first, struct node ** last, int iNo, int iPos)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    int iCount;
    int iCnt = 0;
    
    iCount = Count(*first, *last);
    

    if((iPos < 1) || (iPos > iCount + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first, last, iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first, last, iNo);
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
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteFirst(struct node ** first, struct node ** last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first) -> next;
        free((*first) -> prev);

        (*last) -> next = *first;
        (*first) -> prev = *last;
    }
}

void DeleteLast(struct node ** first, struct node ** last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if((*first) -> next == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last) -> prev;
        free((*last) -> next);

        (*last) -> next = *first;
        (*first) -> prev = *last;
    }
}

void DeleteAtPos(struct node ** first, struct node ** last, int iPos)
{
    struct node * temp = NULL;

    int iCount;
    int iCnt = 0;
    
    iCount = Count(*first, *last);
    

    if((iPos < 1) || (iPos > iCount))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first, last);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first, last);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;
    }
}

int main()
{
    struct node * head = NULL;
    struct node * tail = NULL;

    int iRet = 0;

    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    InsertLast(&head, &tail, 101);
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Count of elements is : %d\n", iRet);

    DeleteFirst(&head, &tail);
    Display(head, tail);
    iRet = Count(head, tail);
    printf("Count of elements is : %d\n", iRet);

    DeleteLast(&head, &tail);
    Display(head, tail);
    iRet = Count(head, tail);
    printf("Count of elements is : %d\n", iRet);

    InsertAtPos(&head, &tail, 105, 4);
    Display(head, tail);
    iRet = Count(head, tail);
    printf("Count of elements is : %d\n", iRet);

    DeleteAtPos(&head, &tail, 4);
    Display(head, tail);
    iRet = Count(head, tail);
    printf("Count of elements is : %d\n", iRet);

    return 0;
}