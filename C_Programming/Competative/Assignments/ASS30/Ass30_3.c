// Last occurrence position

///////////////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
// Structure name   :   node
// Description      :   Defines the structure of a singly linear Linked List node.
//                      Each node contains data and the addres of the next node.
// Date             :   07/07/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
///////////////////////////////////////////////////////////////////////////////////////

struct node
{
    int data;                       // Variable to store data
    struct node *next;              // Pointer to store address of next node
};

///////////////////////////////////////////////////////////////////////////////////////
//
// Name             :   Typedef Definations
// Description      :   Creates user-defined alias for node (NODE),
//                      pointer to node (PNODE),
//                      pointer to pointer to node (PPNODE).
// Date             :   07/07/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
///////////////////////////////////////////////////////////////////////////////////////

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

///////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Display
// Input            :   PNODE
// Output           :   void
// Description      :   Display Singly Linear Linked List
// Date             :   07/07/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
///////////////////////////////////////////////////////////////////////////////////////

void Display(
                PNODE first                 // Points to the first node 
            )
{
    while(first != NULL)                    // Traverse list until NULL
    {
        printf("%d\t", first -> data);      // Print node data
        first = first -> next;              // Go to next node
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertFirst
// Input            :   PPNODE, int
// Output           :   void
// Description      :   Insert a new node at beginning of the Linked list 
// Date             :   07/07/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
///////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(
                    PPNODE first,           // Address of the first node pointer
                    int iNo                 // Data to be inserted
                )
{
    PNODE newn = NULL;                      // Pointer to store address of new node

    newn = (PNODE)malloc(sizeof(NODE));     // Memory Allocation

    newn -> data = iNo;                     // Initialize the new node
    newn -> next = NULL;

    if(NULL == *first)                      // If linked list is empty
    {
        *first = newn;                      // Make new node the first node
    }
    else                                    // If linked list is not empty 
    {
        newn -> next = *first;              // Link the node
        *first = newn;                      // Update the first pointer
    }
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertLast
// Input            :   PPNODE, int
// Output           :   void
// Description      :   Insert a new node at last of the Linked list 
// Date             :   07/07/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
///////////////////////////////////////////////////////////////////////////////////////

void InsertLast(
                    PPNODE first,           // Address of the first node pointer
                    int iNo                 // Data to be inserted
               )
{
    PNODE newn = NULL;                      // Pointer to store address of new node
    PNODE temp = NULL;                      // Temporary Pointer to store address of first pointer

    newn = (PNODE)malloc(sizeof(NODE));     // Memory Allocation

    newn -> data = iNo;                     // Initialize the new node
    newn -> next = NULL;

    if(NULL == *first)                      // If linked list is empty
    {
        *first = newn;                      // Make new node the first node
    }
    else                                    // If linked list is not empty
    {
        temp = *first;                      // Initialize temp to first address 

        while(temp -> next != NULL)         // Traverse until not NULL
        {
            temp = temp -> next;            // Go to next node
        }

        temp -> next = newn;                // Update temp pointer 
    }
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   LastOccur
// Input            :   PNODE, int
// Output           :   int
// Description      :   To return position of last occurrence
// Date             :   07/07/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
///////////////////////////////////////////////////////////////////////////////////////

int LastOccur(
                    PNODE first,            // Points to the first node 
                    int iNo                 // Number of which to find occurrence  
             )
{
    int iPos = 1;                           // Variable to store position
    int iLast = -1;                         // Variable to store position of last occ

    while(first != NULL)                    // Traverse until NULL
    {   
        if(first -> data == iNo)
        {
            iLast = iPos;
        }
        first = first -> next;              // Go to next node
        iPos++;
    }
    return iLast;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Application to find last occurrence of number from Linked List
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;                      // Pointer to store address 
    int iRet = 0;                           // Variable to store return value of functions

    InsertFirst(&head, 11);                 // Function call
    InsertFirst(&head, 21);                 // Function call
    InsertFirst(&head, 11);                 // Function call

    InsertLast(&head, 51);                  // Function call
    InsertLast(&head, 51);                  // Function call

    Display(head);                          // Function call

    iRet = LastOccur(head, 11);
    printf("Last occurrence of number is : %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Input  : -
// Output : 3
//
///////////////////////////////////////////////////////////////////////////////////////