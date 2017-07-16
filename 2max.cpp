#include<iostream>
using namespace std;

main()
{
    int a, b, c;

    cin>>a>>b>>c;

     if(a==b && b==c)
     {
         cout<<"Equal"<<endl;

     }


    else if(a>=b && c<=a)
     {
         cout<<"Max="<<a<<endl;
         if(b>=c)
            cout<<"Min="<<c<<endl;
         else
            cout<<"Min="<<b<<endl;
     }

     else if(b>=a && c<=b)
     {
         cout<<"Max="<<b<<endl;
         if(a>=c)
            cout<<"Min="<<c<<endl;
         else
            cout<<"Min="<<a<<endl;
     }

     else
     {
         cout<<"Max="<<c<<endl;
         if(b>=a)
            cout<<"Min="<<a<<endl;
         else
            cout<<"Min="<<b<<endl;
     }

    return 0;
}

