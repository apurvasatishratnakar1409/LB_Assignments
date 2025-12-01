#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    
    if((chDiv < 'A' || chDiv > 'D') && (chDiv < 'a' || chDiv > 'd'))
    {
        printf("INVALID INPUT!\n");
        return;
    }

    
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("YOUR EXAM IS AT 7 AM\n");
            break;
        
        case 'B':
        case 'b':
            printf("YOUR EXAM IS AT 8.30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("YOUR EXAM IS AT 9.20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("YOUR EXAM IS AT 10.30 AM\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("ENTER THE DIVISION: ");
    scanf(" %c",&cValue);  

    DisplaySchedule(cValue);

    return 0;
}
