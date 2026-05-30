#include<iostream>
using namespace std;

int main()
{
    int Size;

    cout<<"Enter the number of elements: \n";
    cin>>Size;

    int *ptr = new int[Size];

    //  Use

    delete []ptr;

    return 0;
}


// accept n numbers from user and return largest value