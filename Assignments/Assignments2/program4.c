#include<stdio.h>

int Display(int iNo , int iFrequency)
{
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{

    int iValue = 0;
    int iCount = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue);

    printf("enter the second number\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0 ;
}
