/*
    Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
    Output : 11   17   41   89
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

int IsPrime(int iNo)
{
    int i = 0;

    if(iNo < 2)
    {
        return 0;
    }

    for(i = 2; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void DisplayPrime(PNODE Head)
{
    while(Head != NULL)
    {
        if(IsPrime(Head->Data))
        {
            printf("%d\t", Head->Data);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Prime elements are:");
    DisplayPrime(First);

    return 0;
}