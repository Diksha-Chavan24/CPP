#include<iostream>
using namespace std;

template<class T>
T Addition(T Arr[], int Length)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size, iCnt = 0, Ret;

    cout<<"Enter the number of elements: \n";
    cin>>Size;

    int *ptr = new int[Size];

    cout<<"Enter the elements :\n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements are : \n";

    Ret = Addition(ptr, Size);

    cout<<"Addition is : "<<Ret<<"\n";

    delete []ptr;

    return 0;
}


// accept n numbers from user and return largest value