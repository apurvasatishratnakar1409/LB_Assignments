/*
2.  Write a generic program to check whether array is sorted
*/

#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T* arr, int iSize)
{
    T prev = 0;
    int iCnt = 0;
    prev = arr[0];

    for(iCnt = 1; iCnt<iSize; iCnt++)
    {
        if(prev>arr[iCnt])
        {
            return false;
        }
        prev = arr[iCnt];
    }
}

int main()
{
    int iCnt = 0;
    bool bRet = false;
    float arr[5] = {10.9,40.8,30.7,40.6,50.5};
    
    bRet = CheckSorted(arr,5);
    if(bRet == true)
    {
        cout<<"The array is sorted\n";
    }
    else
    {
        cout<<"The array is not sorted\n";
    }
    cout<<"\n";


    int brr[5] = {10,20,30,40,50};

    bRet = CheckSorted(brr,5);
    if(bRet == true)
    {
        cout<<"The array is sorted\n";
    }
    else
    {
        cout<<"The array is not sorted\n";
    }
    cout<<"\n";

    return 0;
}