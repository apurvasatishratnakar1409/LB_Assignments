#include <stdio.h>

void Display(int NO)
{
    
   if(NO==0)
   {
        return;
   }
    
    Display(NO-1); 
    printf("%d",NO); 
}

int main()
{
    Display(5);
    return 0;
}
