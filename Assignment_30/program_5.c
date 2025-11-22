
/*
Enter rows and columns:
5
5
1       2       3       4       5
1       @       @       @       5
1       @       @       @       5
1       @       @       @       5
1       2       3       4       5

*/

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i, j;

    for(i=1 ;i<=iRow ; i++)
        {
            for(j=1 ; j<=iCol ;j++)
            {
                if(j ==1 || j == iCol || i ==1 ||i==iRow)
                {
                    printf("%d\t",j);
                }
                else
                {
                    printf("@\t");

                }
            }
            printf("\n");
        } 
}


int main()
{
    int iValue1, iValue2;

    printf("Enter rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    pattern(iValue1, iValue2);

    return 0;
}