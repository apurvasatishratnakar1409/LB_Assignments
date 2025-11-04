#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    int iSumEven=0;
    int iSumOdd=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iSumEven=iSumEven+iDigit;
        }
        else
        {
            iSumOdd=iSumOdd+iDigit;
        }
        
        iNo=iNo/10;
        iCnt++;
       
    }
    return iSumEven-iSumOdd;

}

int main()
{
    int iValue=0 ,iRet=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("%d",iRet);
    return 0;
}
