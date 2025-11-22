/*
Enter rows and columns:
6
6
*       *       *       *       *       *
#       *       *       *       *       *
#       #       *       *       *       *
#       #       #       *       *       *
#       #       #       #       *       *
#       #       #       #       #       *
*/

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i, j;

    for(i=1 ;i<=iRow ; i++)
        {
            for(j=1 ; j<=iCol ;j++)
            {
                if(i > j )
                {
                    printf("#\t");
                }
                else
                {
                    printf("*\t");

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
