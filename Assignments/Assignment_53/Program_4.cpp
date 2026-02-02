/*
4.  Write a generic program to find second smallest element
*/

#include<iostream>
using namespace std;

template<class T>
T SecondMin(T* arr, int iSize)
{
    T prevMin, Min;
    if(arr[0]<arr[1])
    {
        prevMin = arr[1];
        Min = arr[0];
    }
    else
    {
        prevMin = arr[0];
        Min = arr[1];
    }

    for(int iCnt = 2; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Min)
        {
            prevMin = Min;
            Min = arr[iCnt];
        }
        else if(arr[iCnt] < prevMin && arr[iCnt] != Min)
        {
            prevMin = arr[iCnt];
        }
    }
    

    return prevMin;
}

int main()
{
    int iCnt = 0;
    float arr[5] = {10.9,20.8,30.7,40.6,50.5};
    
    float fRet= SecondMin(arr,5);
    cout<<"Second Smallest elements is: "<<fRet;
    cout<<"\n";


    int brr[5] = {50,20,30,40,10};
    int iRet = SecondMin(brr,5);
    cout<<"Second Smallest elements is: "<<iRet;
    cout<<"\n"; 

    return 0;
}