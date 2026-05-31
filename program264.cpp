#include<iostream>
using namespace std;

int CountOne(int iNo )
{
    int iDigit = 0, iCount = 0; 

    while(iNo !=0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCount++;
        }
        iNo = iNo / 2;

        
    }

    cout<<endl;
    return iCount;
}


int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;
    
    iRet = CountOne(iValue);

    cout<<"Number of 1 are : "<<iRet<<"\n";

    return 0;
}

