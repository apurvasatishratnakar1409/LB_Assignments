/*
| 10 | ->  | 70 | ->  | 30 | ->  | 50 | ->  | 40 | ->  | 30 | ->  | 20 | ->  | 10 | -> NULL
First occurance is at position : 3
*/
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = no;
    newn -> Next = NULL;
    

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}
int SearchFirstOcc(PNODE Head , int no)
{
    int iPos =1;

    while (Head != NULL)
    {
        if (Head -> Data == no)
        {
            return iPos;
        }
        Head = Head-> Next;
        iPos++;
    }
    return -1;
}

int SearchLastOcc(PNODE Head , int no)
{
    int iPos =1;
    int iLast = -1;

    while (Head != NULL)
    {
        if (Head -> Data == no)
        {
            iLast = iPos;
        }
        Head = Head-> Next;
        iPos++;
    }
    return iLast;
}
void Display(PNODE First)
{
    while (First != NULL)
    {
        printf(" | %d | -> ",First -> Data);
        First = First -> Next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First , 10);
    InsertFirst(&First , 20);
    InsertFirst(&First , 30);
    InsertFirst(&First , 40);
    InsertFirst(&First , 50);
    InsertFirst(&First , 30);
    InsertFirst(&First , 70);
    InsertFirst(&First , 10);


    Display(First);
    iRet = SearchFirstOcc(First , 30);

    if (iRet == -1)
    {
        printf("Elemets not found \n");
    }
    else
    {
        printf("First occurance is at position : %d\n", iRet);

    }

    iRet = SearchLastOcc(First , 30);

    if (iRet == -1)
    {
        printf("Elemets not found \n");
    }
    else
    {
        printf("Last occurance is at position : %d\n", iRet);

    }
    return 0;

}
