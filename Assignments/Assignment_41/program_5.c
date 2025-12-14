#include <stdio.h>

int  Mult(int iNO)
{
    if(iNO<=1)
    {
        return 1;
    }

    return ((iNO%10)* Mult(iNO/10)) ;
    

}


int main()
{
    ;
    int iValue=0,iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=Mult(iValue);
    printf("%d",iRet);

    return 0;
}