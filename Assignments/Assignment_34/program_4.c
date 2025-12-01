/*
ENTER THE CHARACTER:---
@
IT IS A Special CHARACTER :---

ENTER THE CHARACTER:---
IT IS A Special CHARACTER :---

ENTER THE CHARACTER:---
f
IT IS NOT A Special CHARACTER
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekSpecial(char ch)
{
    if((ch >= ' ' && ch <= '@') )
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

    bRet = ChekSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("IT IS A Special CHARACTER :---");
    }
    else
    {
        printf("IT IS NOT A Special CHARACTER");

    }
    return 0;
}