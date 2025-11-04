#include<stdio.h>

void PrintFactors(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=(iNo);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d ",iCnt);
        }

    }
    
//time complexity O(n)

}

int main()
{
    int ivalue=0;
    printf("Enter the Number:");
    scanf("%d",&ivalue);
    PrintFactors(ivalue);
    return 0;

}
