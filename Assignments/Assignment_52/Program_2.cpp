/*
2.  Write a generic program to find largest number from three numbers
*/

#include<iostream>
using namespace std;

template<class T>

T Max(T no1, T no2, T no3)
{
    T Max;

    Max = no1;

    if(Max<no2)
    {
        Max = no2;
    }
    if(Max<no3)
    {
        Max = no3;
    }

    return Max;
}


int main()
{
    int iRet = Max(40,30,20);
    cout<<iRet<<"\t";
    cout<<"\n";
    
    float fRet = Max(26.0f, 25.0f,21.0f);
    cout<<fRet<<"\t";
    cout<<"\n";

    return 0;
}