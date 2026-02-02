/*
1.  Write a generic program to perform addition of two numbers
*/

#include<iostream>
using namespace std;

template<class T>
int Add(T no1, T no2)
{
    T Sum = no1+no2;
    return Sum;
}

int main()
{
    int iRet =Add(10,20);
    cout<<iRet<<"\n";
    
    float fRet =Add(10.5f,20.3f);
    cout<<fRet<<"\n";
    
    return 0;
}
