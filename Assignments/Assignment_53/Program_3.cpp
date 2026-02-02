/*
3.  Write a generic program to find second largest element
*/

#include<iostream>
using namespace std;

template<class T>
T SecondMax(T* arr, int iSize)
{
    T prevMax = 0, Max = 0;
    int iCnt = 0;

    Max = arr[0];
    for(iCnt = 1; iCnt<iSize; iCnt++)
    {
        if(Max<arr[iCnt])
        {
            prevMax = Max;
            Max = arr[iCnt];
        }
        else if(arr[iCnt] > prevMax && arr[iCnt] != Max)
        {
            prevMax = arr[iCnt];
        }
    }

    return prevMax;
}

int main()
{
    int iCnt = 0;
    float arr[5] = {10.9,40.8,30.7,40.6,50.5};
    
    float fRet= SecondMax(arr,5);
    cout<<"Second Largest elements is: "<<fRet;
    cout<<"\n";


    int brr[5] = {50,20,30,40,10};
    int iRet = SecondMax(brr,5);
    cout<<"Second Largest elements is: "<<iRet;
    cout<<"\n"; 

    return 0;
}