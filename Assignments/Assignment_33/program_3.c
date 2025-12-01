/*
ENTER THE Digit :---
1
IT IS A  Digit :---

ENTER THE Digit :---
e
IT IS NOT A Digit
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekDigit(char ch)
{
    if((ch >= '0' && ch <= '9') )
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

    printf("ENTER THE Digit :---\n");
    scanf("%c",&cValue);

    bRet = ChekDigit(cValue);

    if(bRet == TRUE)
    {
        printf("IT IS A  Digit :---");
    }
    else
    {
        printf("IT IS NOT A Digit");

    }
    return 0;
}