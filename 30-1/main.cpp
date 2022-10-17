#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    try
    {
        if(n>=0 && n<=9)
            throw n;
        else
            cout<<"It is not a Single Number"<<endl;
        throw;
    }
    catch(int a)
    {
        cout<<"It is a Single Number"<<endl;
    }
    catch(char b[100])
    {
        cout<<b<<endl;
    }
    return 0;
}
