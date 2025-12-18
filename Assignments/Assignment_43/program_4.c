
/*
    Input linked list : |110|->|230|->|320|->|240|
    Output : 240
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

int SecMaximum(PNODE Head)
{
    int iMax = -1, iSecMax = -1;

    if(Head == NULL || Head -> Next == NULL)
    {
       return -1;
    }

    while(Head != NULL)
    {
        if(Head -> Data > iMax)
        {
            iSecMax = iMax;
            iMax = Head -> Data;
        }
        else if(Head -> Data > iSecMax && Head -> Data != iMax)
        {
            iSecMax = Head -> Data;
        }
        Head = Head -> Next;
    }
    
    return iSecMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);

    printf("Second maximum elements is: %d", iRet);

    return 0;
}
