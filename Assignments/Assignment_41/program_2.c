#include <stdio.h>

int DgtSum(int NO)
{
    
   if(NO==0)
   {
        return 0;
   }
   return ((NO%10)+DgtSum(NO/10));
}

int main()
{
    int iValue=0,iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=DgtSum(iValue);
    printf("%d",iRet);
    return 0;
}