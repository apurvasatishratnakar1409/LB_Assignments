
/*
nter the number of Elements:-
4
3
*       *       *
*       *       *
*       *       *
*       *       *

*/

#include<stdio.h>

void pattern(int iRow , int iCol)
{
   int i = 0;
        int j = 0;
        for (i =1 ; i<=iRow ; i++)
        {
            for(j=1;j<=iCol;j++)
            {
                printf("*\t");

            }
            printf("\n");
            
        }
}


int main()
{
    int iValue1 = 0 ,  iValue2 =0 ;

    printf("Enter the number of Elements:-\n");
    scanf("%d %d", &iValue1 , &iValue2);

    pattern(iValue1 , iValue2);

    return 0;
}
