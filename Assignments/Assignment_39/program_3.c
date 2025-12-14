#include <stdio.h>

void Display(int NO)
{
    
   if(NO==0)
   {
        return;
   }
    printf("%d",NO); 
    Display(NO-1); 
    
}

int main()
{
    Display(5);
    return 0;
}