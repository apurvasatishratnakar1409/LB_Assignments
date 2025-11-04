#include<stdio.h>


void CountTwo(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int  iDigit=0,iCnt=0,iCount=0;
    iCnt=1;
    while(iNo!=0)
    {
        iDigit=iNo%10;
       

        if(iDigit==2)
        {
            iCount++;
        }  
         iNo=iNo/10;
        iCnt++;
        
 
    }
     printf("%d",iCount);
}

int main()
{
    int iDigit=0;
    
    printf("Enter The Number:");
    scanf("%d",&iDigit);
    CountTwo(iDigit);
   
    
    return 0;
}
