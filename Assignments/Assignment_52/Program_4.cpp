/*
4.  Write a generic program to accept N values from user and return Largest value.
*/

#include<iostream>
using namespace std;

template<class T>

T Max(T *arr, int iSize)
{
    T Max;
    int i = 0;
    Max = arr[0];

    for(i=1; i<iSize; i++)
    {
        if(Max<arr[i])
        {
            Max = arr[i];
        }
    }

    return Max;
}


int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,80.7};

    int iRet = Max(arr,5);
    cout<<iRet<<"\n";
    
    float fRet = Max(brr,4);
    cout<<fRet<<"\n";

    return 0;
}