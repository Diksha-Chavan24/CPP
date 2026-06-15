#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2) //error
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int a = 10, b = 11, iRet = 0;
    iRet = Addition(a,b);
    cout<<"Addition is : "<<iRet<<"\n";

    double x = 10.90, y = 11.70, iRet2 = 0.0;
    iRet2 = Addition(x,y);
    cout<<"Addition is : "<<iRet2<<"\n";

    return 0;
}