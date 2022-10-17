#include <iostream>

using namespace std;

int main()
{
    long long number, count=0;
    cout<<"Enter Pin Code : ";
    cin>>number;
    try
    {
        while (number)
        {
            count++;
            number/=10;
        }
        if(count==6)
            throw 1;
        if(count!=6)
            throw 2;
    }
    catch(int n)
    {
        if(n==1)
            cout<<"Valid Pin Code"<<endl;
        if(n==2)
            cout<<"Invalid Pin Code"<<endl;
    }
    return 0;
}
