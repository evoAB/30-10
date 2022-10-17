#include <iostream>

using namespace std;

bool isEmail(char*);
int main()
{
    try
    {
        char email[20];
        cout<<"Enter Email : ";
        cin>>email;
        if(isEmail(email))
            cout<<"It is valid Email"<<endl;
        else
            throw 'c';
    }
    catch(char a)
    {
        cout<<"Error : It is not a valid email"<<endl;
    }
    catch(...)
    {
        cout<<"Error : Default Exception"<<endl;
    }
    return 0;
}
bool isEmail(char *email)
{
    int at=-1;
    int dot=-1;
    int length=-1;
    for(int i=0;email[i];i++)
    {
        if(email[i]=='@')
            at=i;
        if(email[i]=='.')
            dot=i;
        length++;
    }
    if(dot==-1 || at==-1 || dot==length || at == length)
        return 0;
    if(dot<at)
        return 0;
    if(at<dot)
        return 1;
}
