/*
Enter String:--
2
Updated string is : 2
Enter String:--
e
Updated string is : E
Enter String:--
A
Updated string is : a
*/
#include <stdio.h>

void strtoggleX(char str[])
{
    while(*str !='\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32 ;
        }
        else if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32 ;
        }
        else
        {
            *str;

        }
        str++;
    }
}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String:--\n");
    scanf("%[^'\n']s",Arr);                             

    strtoggleX(Arr);      

    printf("Updated string is : %s\n",Arr);
    return 0;
}