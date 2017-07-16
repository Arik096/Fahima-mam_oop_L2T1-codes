#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"equal";
    }
    else if(a>=b && a>=c)
    {
        cout<<a<<"is the maximum";
    }
    else if(b>=a && b>=c)
    {
        cout<<b<<"is the maximum";

    }

    else
    {
        cout<<c<<"is the maximum";

    }
    return 0;

}
