#include <stdio.h>

void Display(int NO)
{
    
   if(NO==0)
   {
        return;
   }
    printf("%d\t*\t",NO);
    Display(NO-1);  
}

int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
