#include <iostream>

using namespace std;

int main()
{
    long long number, count=0;
    cout<<"Enter Phone number : ";
    cin>>number;
    try
    {
        while (number)
        {
            count++;
            number/=10;
        }
        if(count==10)
            throw 1;
        if(count!=10)
            throw 2;
    }
    catch(int n)
    {
        if(n==1)
            cout<<"Valid Number"<<endl;
        if(n==2)
            cout<<"Invalid Number"<<endl;
    }
    return 0;
}
