/*  
    3.Last Occurrence Position
    Return position of last occurrence.
    int LastOccur(PNODE Head, int No);

    | 11 | -> | 22 | -> | 51 | -> NULL
    Number of nodes are : 3
    | 11 | -> | 22 | -> | 51 | -> | 40 | -> | 111 | -> | 12 | -> NULL
    Number of nodes are : 6
    | 22 | -> | 51 | -> | 40 | -> | 111 | -> | 12 | -> NULL
    Number of nodes are : 5
    | 22 | -> | 51 | -> | 40 | -> | 111 | -> NULL
    Number of nodes are : 4
    | 22 | -> | 51 | -> | 105 | -> | 40 | -> | 111 | -> NULL
    Number of nodes are : 5
    | 22 | -> | 51 | -> | 40 | -> | 111 | -> NULL
    Number of nodes are : 4
    Last occurrence at position : 4
*/

#include<stdio.h>
#include<stdlib.h>

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
        *first = newn;
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
        *first = newn;
    else
    {
        temp = *first;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
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
            temp = temp->next;
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
    int iSize = Count(*first);
    int iCnt = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if((pos < 1) || (pos > iSize + 1))
        return;

    if(pos == 1)
        InsertFirst(first, no);
    else if(pos == iSize + 1)
        InsertLast(first, no);
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *first;
        for(iCnt = 1; iCnt < pos - 1; iCnt++)
            temp = temp->next;

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
    int iSize = Count(*first);
    int iCnt = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    if((pos < 1) || (pos > iSize))
        return;

    if(pos == 1)
        DeleteFirst(first);
    else if(pos == iSize)
        DeleteLast(first);
    else
    {
        temp = *first;
        for(iCnt = 1; iCnt < pos - 1; iCnt++)
            temp = temp->next;

        target = temp->next;
        temp->next = target->next;
        free(target);
    }
}

int LastOccur(PNODE head, int no)
{
    int iPos = 1;
    int iLast = -1;

    while(head != NULL)
    {
        if(head->data == no)
        {
            iLast = iPos;
        }

        iPos++;
        head = head->next;
    }
    return iLast;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);
    
    InsertLast(&head, 40);
    InsertLast(&head, 111);
    InsertLast(&head, 12);

    Display(head);
    printf("Number of nodes are : %d\n", Count(head));

    DeleteFirst(&head);
    Display(head);
    printf("Number of nodes are : %d\n", Count(head));

    DeleteLast(&head);
    Display(head);
    printf("Number of nodes are : %d\n", Count(head));

    InsertAtPos(&head, 105, 3);
    Display(head);
    printf("Number of nodes are : %d\n", Count(head));

    DeleteAtPos(&head, 3);
    Display(head);
    printf("Number of nodes are : %d\n", Count(head));

    iRet = LastOccur(head, 111);

    if(iRet != -1)
    {
        printf("Last occurrence at position : %d\n", iRet);
    }    
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
