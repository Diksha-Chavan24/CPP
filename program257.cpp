#include<iostream>
using namespace std;

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

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    delete []ptr;

    return 0;
}


// accept n numbers from user and return largest value