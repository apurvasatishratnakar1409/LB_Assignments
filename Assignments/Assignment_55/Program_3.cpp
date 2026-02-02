/*
3.  Write a generic program to perform Division of two numbers
*/

#include<iostream>
using namespace std;

template<class T>
int Div(T no1, T no2)
{
    T Div;
    if(no1 > no2)
    {
        Div = no1 / no2;
    }
    else
    {
        Div = no2 / no1; 
    }
    return Div;
}

int main()
{
    int iRet =Div(10,20);
    cout<<iRet<<"\n";
    
    float fRet =Div(10.5f,20.3f);
    cout<<fRet<<"\n";
    
    return 0;
}