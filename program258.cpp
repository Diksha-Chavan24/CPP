#include<iostream>
using namespace std;

void Display(int Arr[], int Length)
{
    int iCnt;
    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size, iCnt;

    cout<<"Enter the number of elements: \n";
    cin>>Size;

    int *ptr = new int[Size];

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