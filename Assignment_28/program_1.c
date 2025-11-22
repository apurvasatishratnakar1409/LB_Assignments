
/* 
Enter the number of Elements:-
4
3
A       B       C
A       B       C
A       B       C
A       B       C
*/

#include<stdio.h>

void pattern(char iRow , char iCol)
{
   int i = 0;
        int j = 0;
        int iCh ;
        for (i =1 ; i<=iRow ; i++)
        {
            iCh ='A';
            for(j=1;j<=iCol;j++)
            {
                printf("%c\t",iCh);
                iCh++;

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
