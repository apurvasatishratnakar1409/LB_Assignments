#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    
    dCelsius = (fTemp - 32) * 5.0 / 9.0;

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%d", &fValue);   
    dRet = FhtoCs(fValue);  
    printf("Temperature in Celsius: %lf\n", dRet);

    return 0;
}
