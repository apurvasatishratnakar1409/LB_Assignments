#include <stdio.h>

void  Display(char ch)
{
    
   if(ch>'f')
   {
        return;
   }
    
    
    printf("%c ",ch); 
    Display(ch+1); 
    
}

int main()
{
    Display('a');
    return 0;
}