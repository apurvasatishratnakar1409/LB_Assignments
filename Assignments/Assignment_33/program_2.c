/*
ENTER THE CHARACTER:---
A
IT IS A  CAPITAL CHARACTER :---

ENTER THE CHARACTER:---
a
IT IS NOT A CAPITAL CHARACTER
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z') )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("ENTER THE CHARACTER:---\n");
    scanf("%c",&cValue);

    bRet = ChekCapital(cValue);

    if(bRet == TRUE)
    {
        printf("IT IS A  CAPITAL CHARACTER :---");
    }
    else
    {
        printf("IT IS NOT A CAPITAL CHARACTER");

    }
    return 0;
}