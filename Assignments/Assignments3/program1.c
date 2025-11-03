#include<stdio.h>
#include<stdbool.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return ;
    }
     int icnt = 0;
    for(icnt = 1 ; icnt <=iNo ; icnt = icnt+2)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    
    return 0 ;
}
