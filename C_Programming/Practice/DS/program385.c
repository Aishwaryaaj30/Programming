// Doubly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

# pragma pack(1)

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

struct node
{
    int data;
    struct node *next;
    struct node *prev;                  // $
};

int main()
{
    printf("%d\n", sizeof(NODE));       // 20 bytes

    return 0;
}