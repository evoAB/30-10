#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[20];
    cout<<"Enter Nickname : ";
    gets(c);
    try
    {
        if(strlen(c)>8)
            throw 1;
        for(int i=0;c[i];i++)
            if(!((c[i]>='a' && c[i]<='z')||(c[i]>='A' && c[i]<='Z')))
            {
                throw 2;
                break;
            }
        cout<<"Nickname Accepted"<<endl;
    }
    catch(int n)
    {
        if(n==1)
            cout<<"Error : Nickname is greater than 8"<<endl;
        if(n==2)
            cout<<"Error : Nickname has character other than alphabet"<<endl;
    }
    return 0;
}
