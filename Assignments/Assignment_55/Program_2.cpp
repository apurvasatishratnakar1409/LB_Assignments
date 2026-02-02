/*
2.  Write a generic program to perform Substraction of two numbers
*/

#include<iostream>
using namespace std;

template<class T>
int Sub(T no1, T no2)
{
    T Diff;
    if(no1 > no2)
    {
        Diff = no1 - no2;
    }
    else
    {
        Diff = no2 - no1; 
    }
    return Diff;
}

int main()
{
    int iRet =Sub(10,20);
    cout<<iRet<<"\n";
    
    float fRet =Sub(10.5f,20.3f);
    cout<<fRet<<"\n";
    
    return 0;
}