#include <iostream>

using namespace std;

int main()
{
    try
    {
        throw 'e';
    }
    catch(char e)
    {
        cout<<"\nException Caught "<<e<<endl;
    }
    return 0;
}
