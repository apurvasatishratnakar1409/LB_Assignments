/*
1.  Write a program to search value in an array.
*/

#include<iostream>
using namespace std;


template<class T>
bool Search(T* arr, int iSize, T value)
{
    int iCnt = 0;
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    bool bRet = false;

    int Arr[] = {10,20,30,40,50};

    bRet = Search(Arr,5,40);

    if(bRet == true)
    {
        cout<<"The number is present in the array\n";
    }
    else
    {
        cout<<"The number is NOT present in the array\n";
    }

    return 0;
}
