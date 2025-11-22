/*
Enter the number of Elements:-
3
#       1       *       #       2       *       #       3       *

*/
#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
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
