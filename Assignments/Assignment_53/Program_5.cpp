/*
5.  Write a generic program to replace all occurrences of a value
*/

#include<iostream>
using namespace std;

template<class T>
void Replace(T* arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
    }

}

int main()
{
    int iCnt = 0;
    
    float arr[5] = {10.9, 20.8, 30.7, 40.6, 50.5};
    
    cout<<"Float array before replacement:"<<endl;
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<arr[iCnt]<<" ";
    }
    cout<<"\n";
    
    Replace(arr, 5, 30.7f, 35.5f);
    
    cout<<"Float array after replacing 30.7 with 35.5:"<<"\n";
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<arr[iCnt]<<" ";
    }
    cout<<"\n\n";

    int brr[7] = {50, 20, 30, 40, 10, 30,30};
    
    cout<<"Integer array before replacement:"<<"\n";
    for(iCnt = 0; iCnt < 7; iCnt++)
    {
        cout<<brr[iCnt]<<" ";
    }
    cout<<"\n";
    
    Replace(brr, 7, 30, 35);
    
    cout<<"Integer array after replacing 30 with 35:"<<endl;
    for(iCnt = 0; iCnt < 7; iCnt++)
    {
        cout<<brr[iCnt]<<" ";
    }
    cout<<"\n\n";
    

    return 0;
}