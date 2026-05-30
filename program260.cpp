#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[], int Length)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size, iCnt = 0;

    cout<<"Enter the number of elements: \n";
    cin>>Size;

    float *ptr = new float[Size];

    cout<<"Enter the elements :\n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements are : \n";

    Display(ptr, Size);

    delete []ptr;

    return 0;
}


// accept n numbers from user and return largest value