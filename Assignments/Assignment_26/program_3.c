/*
Enter the number of Elements:-
6
1   *  2    *   3   *   4    *  5  *   6     *  7    *
*/
#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t", iCnt);
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
