#include <stdio.h>

int  Strln(char *Str)
{
    if(*Str=='\0')
    {
        return 0;
    }
    return 1 + Strln(Str+1);
    

}


int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter the String:");
    scanf("%s",Arr);

    iRet=Strln(Arr);
    printf("%d",iRet);

    return 0;
}