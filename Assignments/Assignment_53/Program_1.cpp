/*
1.  Write a generic program to copy one array into another
*/

#include<iostream>
using namespace std;

template<class T>
void CopyArray(T* src, T* dest, int iSize)
{
    int i = 0;

    for(i=0; i <iSize; i++)
    {
        dest[i] = src[i];
    }
}

int main()
{
    int iCnt = 0;

    float arr[5] = {10.9,20.8,30.7,40.6,50.5};
    float brr[5];
    
    CopyArray(arr,brr,5);
    for(iCnt = 0 ; iCnt < 5; iCnt++)
    {
        cout<<brr[iCnt]<<"\t";
    }
    cout<<"\n";
    int crr[5] = {10,20,30,40,50};
    int drr[5];

    CopyArray(crr,drr,5);
    for(iCnt = 0 ; iCnt < 5; iCnt++)
    {
        cout<<drr[iCnt]<<"\t";
    }
    cout<<"\n";

    return 0;
}
