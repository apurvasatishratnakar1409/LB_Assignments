#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt=0, iSum=0;
    for(iCnt=1;iCnt<=(iNo);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum=iSum+iCnt;
           
        }

    }
    return iSum;
//time complexity O(n)

}

int main()
{
    int ivalue=0 ,iRet=0;
    printf("Enter the Number:");
    scanf("%d",&ivalue);
    iRet=SumFactors(ivalue);
    printf("%d",iRet);

    return 0;

}
