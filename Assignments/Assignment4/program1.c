#include <stdio.h>

int MultFact(int iNo)
{
    int icnt = 0;
    int iMult = 0;

    for (icnt = 1,iMult = 1; icnt<= iNo/2 ; icnt++)
    {
        if(iNo % icnt == 0)
        {
             iMult = iMult * icnt;
        } 
    }
    return iMult;
     
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0 ;
}
