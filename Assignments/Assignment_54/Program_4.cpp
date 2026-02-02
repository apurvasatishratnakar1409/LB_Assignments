/*
4.  Write generic program to reverse an array.
*/
#include<iostream>
using namespace std;


template<class T>
void Reverse(T* arr, int iSize)
{
    T temp;  // Changed: temp should be of type T, not T*
    int iStart = 0, iEnd = 0;

    iEnd = iSize-1;
    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int iCnt = 0;

    Reverse(Arr, 5);

    for(iCnt =0; iCnt<5;iCnt++)
    {
        cout<<Arr[iCnt];
    }
    return 0;
}