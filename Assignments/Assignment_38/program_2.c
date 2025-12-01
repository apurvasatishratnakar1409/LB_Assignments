/*
Updated string is : MarvellousPython
*/
#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')    
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';  
}

int main()
{
    char Arr[50] = "Marvel lous Pyth on";
    char Brr[50];

    StrCpyX(Arr, Brr);

    printf("Updated string is : %s\n", Brr);  

    return 0;
}
