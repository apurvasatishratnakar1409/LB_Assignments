
/* 
Enter the number of Elements:-
4
3
1       2       3
4       5       6
7       8       9
1       2       3
*/

#include<stdio.h>

void pattern(int iRow , int iCol)
{
   int i = 0;
        int j = 0;
        int iNum = 1;
        
        for (i =1 ; i<=iRow ; i++)
        {
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",iNum);
                iNum++;
                if(iNum > 9)   
                {
                    iNum = 1;
                }

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
