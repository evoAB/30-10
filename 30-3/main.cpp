#include <iostream>

using namespace std;

int main()
{
    try
    {
        int num1,num2,ans;
        char oper;
        cout << "Enter First number : ";
        cin>>num1;
        cout<< "Enter operation : ";
        cin>>oper;
        if(oper != '+' && oper != '-' && oper != '*' && oper != '/')
            throw oper;

        cout<<"Enter Second number : ";
        cin>>num2;
        switch (oper)
        {
        case '+':
            ans=num1+num2;
            break;
        case '-':
            ans=num1-num2;
            break;
        case '*':
            ans=num1*num2;
            break;
        case '/':
            if(num2==0)
                throw num2;
            ans=num1/num2;
            break;
        }
        cout<<"Answer : "<<ans<<endl;
    }
    catch(int a)
    {
        cout<<"\nError : Invalid number : "<<a<<endl;
    }
    catch (const char b)
    {
        cout<<"\nError : Invalid operator : "<<b<<endl;
    }
    catch(...)
    {

    }
    return 0;
}
