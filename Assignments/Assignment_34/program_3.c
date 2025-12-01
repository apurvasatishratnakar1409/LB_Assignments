/*
Enter String:--
H
H G F E D C B A
Updated string is : H

Enter String:--
1
1 (Not alphabet)
Updated string is : 1
*/
#include <stdio.h>

void Display(char str[])
{
    while(*str != '\0')
    {
        int i = 0;

        
        if(*str >= 'a' && *str <= 'z')
        {
            for(i = *str; i <= 'z'; i++)
            {
                printf("%c ", i);
            }
            printf("\n");
        }
        
        else if(*str >= 'A' && *str <= 'Z')
        {
            for(i = *str; i >= 'A'; i--)
            {
                printf("%c ", i);
            }
            printf("\n");
        }
        else
        {
            printf("%c (Not alphabet)\n", *str);
        }

        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter String:--\n");
    scanf("%[^\n]s", Arr);

    Display(Arr);

    printf("Updated string is : %s\n", Arr);

    return 0;
}
