#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
 }

int main()
{
    int iValue = 0;

    printf("Enter the number from user\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
