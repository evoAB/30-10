#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        string c;
        string g = "@gmail.com";
        cout<<"Enter Email address : ";
        cin>>c;
        if(c.find(g) != -1 )
           throw 1;
        else
            throw 2;
    }
    catch(int a)
    {
        if(a==1)
            cout<<"Gmail Accepted"<<endl;
        if(a==2)
            cout<<"Error : Gmail Rejected"<<endl;
    }
    return 0;
}
