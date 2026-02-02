/*
5.  Write a generic program to accept N values from user and return smallest value.
*/

#include<iostream>
using namespace std;

template<class T>

T Min(T *arr, int iSize)
{
    T Min;
    int i = 0;
    Min = arr[0];

    for(i=1; i<iSize; i++)
    {
        if(Min>arr[i])
        {
            Min = arr[i];
        }
    }

    return Min;
}


int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,80.7};

    int iRet = Min(arr,5);
    cout<<iRet<<"\n";
    
    float fRet = Min(brr,4);
    cout<<fRet<<"\n";

    return 0;
}