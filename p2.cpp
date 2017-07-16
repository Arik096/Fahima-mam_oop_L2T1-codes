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
        if(b>c)
        {
            cout<<a<<"is maximum"<<"\n"<<c<<"is minimum";
        }
        else
        {
            cout<<a<<"is maximum"<<"\n"<<b<<"is minimum";
        }
     }


     else if(b>=a && b>=c)
    {
        if(a>c)
        {
            cout<<b<<"is maximum"<<"\n"<<c<<"is minimum";
        }
        else
        {
            cout<<b<<"is maximum"<<"\n"<<a<<"is minimum";
        }
     }

      else if(c>=a && c>=b)
    {
        if(a>b)
        {
            cout<<c<<"is maximum"<<"\n"<<b<<"is minimum";
        }
        else
        {
           cout<<c<<"is maximum"<<"\n"<<a<<"is minimun";
        }


    }
    return 0;

}

