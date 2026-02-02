/*
5.  Write generic program to find the smallest element of an array.
*/
#include<iostream>
using namespace std;


template<class T>
int Min(T* arr, int iSize)
{
    T Min;
    int iCnt =0;
    Min = arr[0];
    
    for(iCnt = 1; iCnt <iSize; iCnt ++)
    {
        if(arr[iCnt] < Min)
        {
            Min = arr[iCnt];
        }
    }    

    return Min;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int iCnt = 0;

    cout<<Min(Arr, 5);
    
    return 0;
}