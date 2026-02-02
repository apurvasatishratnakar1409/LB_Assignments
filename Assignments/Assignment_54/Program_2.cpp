/*
2.  Write generic program to find sum of all even elements.
*/
#include<iostream>
using namespace std;


template<class T>
int SumEven(T* arr, int iSize)
{
    int iCnt = 0, iSum = 0;
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        if(iCnt%2 != 0)
        {
            iSum = iSum + arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iRet = 0;
    int Arr[] = {10,20,30,40,50};

    cout<<"Sum of elements at even position is: "<<SumEven(Arr,5)<<"\n";

    return 0;
}