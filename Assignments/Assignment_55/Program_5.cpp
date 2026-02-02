/*
5.  Write a generic program to find maximum of four elements.
*/

#include<iostream>
using namespace std;

template<class T>
T Max(T a,T b,T c,T d)
{
    T Max;

    Max = a;

    if(Max<b)
    {
        Max = b;
    }
    if(Max<c)
    {
        Max = c;
    }
    if(Max<d)
    {
        Max = d;
    }

    return Max;
}

int main()
{
    int iRet = Max(10,20,40,30);
    cout<<"Maximum number is: "<<iRet<<"\n";

    float fRet = Max(40.5f,10.9f,20.8f,30.7f);
    cout<<"Maximum number is: "<<fRet<<"\n";

    return 0;
}