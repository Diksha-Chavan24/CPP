#include<iostream>
using namespace std;

//Call by value funtion as it does not have *
void Swap(int No1, int No2) 
{
    int Temp = 0;

    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    int a = 10, b = 11, iRet = 0;
    
    Swap(a,b);

    cout<<"Value of a :"<<a<<"\n";
    cout<<"Value of b :"<<b<<"\n";

    return 0;
}