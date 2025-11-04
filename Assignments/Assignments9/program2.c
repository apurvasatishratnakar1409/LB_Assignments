#include <stdio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD:\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}
