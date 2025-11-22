
/* 
4
3
3       2       1
3       2       1
3       2       1
3       2       1
*/

#include<stdio.h>

void pattern(int iRow , int iCol)
{
   int i = 0;
        int j = 0;
        for (i =1 ; i<=iRow ; i++)
        {
            for(j=iCol;j>=1;j--)
            {
                printf("%d\t",j);

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
