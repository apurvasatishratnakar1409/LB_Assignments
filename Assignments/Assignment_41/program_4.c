#include <stdio.h>

int  Fact(int iNO)
{
    if(iNO<=1)
    {
        return 1;
    }

    return iNO* Fact(iNO-1) ;
    

}


int main()
{
    ;
    int iValue=0,iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=Fact(iValue);
    printf("%d",iRet);

    return 0;
}