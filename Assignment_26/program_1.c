#include<stdio.h>

void pattern (int iNo)
{
    char iCh = 'A';
    int i = 0;

        for(i = 1 ; i<=iNo ; i++)
        {
            printf("%c\t",iCh);
            iCh++;
        

        }
        printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number of Alphabet:-\n");
    scanf("%d",&iValue);

    pattern(iValue);
    return 0;
}
