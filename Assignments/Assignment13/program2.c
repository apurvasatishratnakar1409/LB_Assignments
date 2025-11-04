#include<stdio.h>

void PrintEvenNumber(int iLimit)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {
        if(iCnt%2==0)   
        {    
            printf("%d ",iCnt);
        }

    }
    
//time complexity O(n)

}

int main()
{
    int iLimit=0;
    printf("Enter the Number:");
    scanf("%d",&iLimit);
    PrintEvenNumber(iLimit);
    return 0;

}
