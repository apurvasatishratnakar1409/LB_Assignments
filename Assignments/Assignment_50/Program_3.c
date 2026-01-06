/*  
   3 . Check Whether List Is Sorted(Ascending order)
    bool CheckSorted(PNODE Head);

    | 11 | -> | 22 | -> | 51 | -> NULL
    Number of nodes are : 1
    | 11 | -> | 22 | -> | 51 | -> | 40 | -> | 117 | -> | 12 | -> NULL
    Number of nodes are : 1
    | 22 | -> | 51 | -> | 40 | -> | 117 | -> | 12 | -> NULL
    Number of nodes are : 1
    | 22 | -> | 51 | -> | 40 | -> | 117 | -> NULL
    Number of nodes are : 1
    | 22 | -> | 51 | -> | 105 | -> | 40 | -> | 117 | -> NULL
    Number of nodes are : 1
    | 22 | -> | 51 | -> | 40 | -> | 117 | -> NULL
    Number of nodes are : 1
    Linked list is NOT sorted in ascending order
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = NULL;

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
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
        return;
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertAtPos(PPNODE first, int no, int pos)
{
    int iSize = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE newn = NULL;

    iSize = Count(*first);
    
    if((pos < 1) || (pos > iSize + 1))
    {
        printf("Invalid position\n");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(first, no);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(first, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *first;
        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
    int iSize = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iSize = Count(*first);

    if((pos < 1) || (pos > iSize))
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iSize)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        free(target);
    }
}

bool CheckSorted(PNODE head)
{
    if(head == NULL || head->next == NULL)
        return true;

    while(head->next != NULL)
    {
        if(head->data > head->next->data)
            return false;

        head = head->next;
    }
    return true;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head, 51);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);

    Display(head);
    bRet = Count(head);
    printf("Number of nodes are : %d\n", bRet);
    
    InsertLast(&head, 40);
    InsertLast(&head, 117);
    InsertLast(&head, 12);

    Display(head);
    bRet = Count(head);
    printf("Number of nodes are : %d\n", bRet);

    DeleteFirst(&head);
    Display(head);
    bRet = Count(head);
    printf("Number of nodes are : %d\n", bRet);

    DeleteLast(&head);
    Display(head);
    bRet = Count(head);
    printf("Number of nodes are : %d\n", bRet);

    InsertAtPos(&head, 105, 3);
    Display(head);
    bRet = Count(head);
    printf("Number of nodes are : %d\n", bRet);

    DeleteAtPos(&head, 3);
    Display(head);
    bRet = Count(head);
    printf("Number of nodes are : %d\n", bRet);

    bRet = CheckSorted(head);
    if(bRet == true)
    {
        printf("Linked list is sorted in ascending order\n");
    }
    else
    {
        printf("Linked list is NOT sorted in ascending order\n");
    }

    return 0;
}
