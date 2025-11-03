#include <stdio.h>

int Display(int iNo)
    {
        if(iNo<10)
        {
            printf("hello");
        }
        else
        {
            printf("Demo");

        }
    }

int main()
{

    int iValue = 0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
