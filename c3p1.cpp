#include<iostream>
using namespace std;
class portB;
class portA
{
    int x;
    public:
        portA(int p)
        {
            x=p;
        }

        friend int status(portA y,portB z);

};
class portB
{
    int x;
    public:
        portB(int q)
        {
            x=q;
        }
friend int status(portA y,portB z);

};
 int status(portA  y,portB z)
{
    if(y.x==0 && z.x==0)
    {
        return 0;
    }
    else if(y.x==0 && z.x==1)
    {
        return 1;
    }
    else if(y.x==1 && z.x==0)
    {
        return 2;
    }
    else
    {
        return 100;
    }

}
  int main()
{
    int a,b;
    cin>>a>>b;
    portA g(a);
    portB h(b);

    //status(a,b);
    cout<<status(g,h);
}
