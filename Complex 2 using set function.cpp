//complex number
#include<iostream>
using namespace std;
class comp
{
    int real,img;
    public:
    void set()
    {
        cout<<"Real Part:";
        cin>>real;
        cout<<"Imaginary Part:";
        cin>>img;
    }
    void get()
    {
        cout<<"Complex Number:"<<real<<"+"<<img<<"i"<<endl;
    }
    friend comp sum(comp a,comp b);
};
    comp sum(comp a,comp b)
    {
        comp c;
        c.real=a.real+b.real;
        c.img=a.img+b.img;
        return c;
    }
int main()
{
    comp x,y,z;
    x.set();
    y.set();
    z=sum(x,y);
    z.get();
}
