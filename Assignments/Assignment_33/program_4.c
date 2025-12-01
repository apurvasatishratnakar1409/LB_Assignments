/*
ENTER THE CHARACTER:---
a
IT IS A  CAPITAL CHARACTER :---

ENTER THE CHARACTER:---
A
IT IS NOT A CAPITAL CHARACTER
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z') )
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

    printf("ENTER THE  CHARACTER:---\n");
    scanf("%c",&cValue);

    bRet = ChekSmall(cValue);

    if(bRet == TRUE)
    {
        printf("IT IS A SMALL CHARACTER :---");
    }
    else
    {
        printf("IT IS NOT A SMALL CHARACTER");

    }
    return 0;
}