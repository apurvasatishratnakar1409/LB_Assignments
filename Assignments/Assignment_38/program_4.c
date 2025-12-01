/*
Updated string is : MARVELLOUS PYTHON 2
*/
#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = "Marvellous python 2";
    char Brr[50];

    StrCpyX(Arr, Brr);

    printf("Updated string is : %s\n", Brr);

    return 0;
}
