#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
        if(iCnt != 1)
        {
            printf("#\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of Elements:-\n");
    scanf("%d", &iValue);

    pattern(iValue);

    return 0;
}
