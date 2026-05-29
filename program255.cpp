#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    cout<<Maximum(15,20,24)<<"\n";
    cout<<Maximum(12.23f,20.45f,24.23f)<<"\n";
    cout<<Maximum(11.78,16.56,18.99)<<"\n";

    return 0;
}