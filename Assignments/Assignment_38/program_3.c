/*
Updated string is : aPURVa

*/
#include<stdio.h>

void StrToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }
        else if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = "ApurvA";
    char Brr[50];

    StrToggle(Arr, Brr);

    printf("Updated string is : %s\n", Brr);

    return 0;
}
