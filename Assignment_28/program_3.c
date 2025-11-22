
/* 
Enter the number of Elements:-
4
3
A       A       A
B       B       B
C       C       C
D       D       D
*/

#include<stdio.h>

void pattern(int iRow , int iCol)
{
   int i = 0;
        int j = 0;
        char  iCh ='A';
        for (i =1 ; i<=iRow ; i++)
        {
            for(j=1;j<=iCol;j++)
            {
                printf("%c\t",iCh);
                

            }
            printf("\n");
            iCh++;
            
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
