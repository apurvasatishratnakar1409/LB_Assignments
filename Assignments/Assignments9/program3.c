#include <stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;   
    }

    printf("Even factors of %d are: ", iNo);

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)   
    {
        if(iNo % iCnt == 0)          
        {
            printf("%d ", iCnt);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);

    return 0;
}
