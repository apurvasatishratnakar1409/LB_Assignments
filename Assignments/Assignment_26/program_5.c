
/*
Enter the number of Elements:-
6
2       4       6       8       10      12
*/

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d\t", iCnt * 2);  
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
