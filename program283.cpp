#include<iostream>
using namespace std;

typedef unsigned int UINT; //5689 //13  //output = 1593

bool ToggledBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;


    iMask = iMask<<(iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the position: \n";
    cin>>iLocation;

    iRet = ToggledBit(iValue, iLocation);

    cout<<"Updated number is : "<<iRet<<"\n";
    
    return 0;
}