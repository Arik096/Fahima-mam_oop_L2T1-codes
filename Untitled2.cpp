#include<iostream>
using namespace std;
class complex{
            int real,img;
            public:
            void set()
            {
                cin>>real>>img;
            }
            void display()
            {
                cout<<real<<img;
            }
            friend complex sum(complex a,complex b);
};
main()
{
    complex a,b,c;
    a.set();
    b.set();
    c=sum(a,b);
    c.display();
}
complex sum(complex a,complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}
