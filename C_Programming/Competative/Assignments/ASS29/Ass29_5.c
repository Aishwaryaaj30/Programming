// Display only even elements

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
// Function name    :   DisplayEven
// Input            :   PNODE
// Output           :   void
// Description      :   Display Even elements 
// Date             :   07/07/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
///////////////////////////////////////////////////////////////////////////////////////

void DisplayEven(
                    PNODE first             // Points to the first node 
                )
{
    while(first != NULL)                    // Traverse until NULL
    {       
        if((first -> data % 2) == 0)        // Check even
        {
            printf("%d\t", first -> data);  // Print data
        }
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
// Application to display only even numbers from Linked List
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;                      // Pointer to store address 

    InsertFirst(&head, 24);
    InsertFirst(&head, 22);
    InsertFirst(&head, 21);                 // Function call
    InsertFirst(&head, 11);                 // Function call

    InsertLast(&head, 51);                  // Function call

    Display(head);                          // Function call

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Input  : -
// Output : 22  24
//
///////////////////////////////////////////////////////////////////////////////////////