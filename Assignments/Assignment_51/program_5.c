/*
    write a program which display addition of digits of element from singly linear linked list.

    function prototype : int SumDigit(PNODE Head);
    Input linked list : |110|->|230|->|20|->|240|->|640|
    Output : 2   5   2   6   10
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void SumDigit(PNODE Head)
{
    int iNo = 0, iSum = 0, iDigit = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\t", iSum);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    printf("Addition of digits are:");
    SumDigit(First);

    return 0;
}