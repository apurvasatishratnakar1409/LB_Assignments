#include<stdio.h>

double SquareMeter(float fArea)
{
    double dResult = 0.0;

    
    dResult = fArea * 0.0929;

    return dResult;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Area in square meter: %lf\n", dRet);

    return 0;
}
