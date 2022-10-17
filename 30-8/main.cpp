#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int isDigit=0, isSChar=0,isChar=0,isException=0;
    char un[20];
    cout<<"Enter Password : ";
    gets(un);
    try
    {
        if(strlen(un)<6)
            throw 1;

        for(int i=0;un[i];i++)
        {

            if(isdigit(un[i]))
                isDigit=1;

            if((un[i]>='a'&& un[i]<='z') || (un[i]>='A'&&un[i]<='Z')||(un[i]>='0'&&un[i]<='9'))
            {
                isChar=1;
            }
            else
            {
                isSChar=1;
            }
        }
        if(isDigit==0)
            throw 2;
        if(isSChar==0)
            throw 3;
    }
    catch(int num)
    {
        if(num == 1)
            cout<<"Error : Password contains less than 6 characters"<<endl;
        if(num==2)
            cout<<"Error : Digit not found"<<endl;
        if(num==3)
            cout<<"Error : Special Character not found"<<endl;

        isException=1;
    }
    if(isException==0)
        cout<<"Password Accepted"<<endl;
    return 0;
}
