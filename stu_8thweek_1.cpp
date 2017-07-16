#include<iostream>
using namespace std;
class Complex { int a,b;
public:
    Complex()
    {
        a=b=0;}
        Complex(int a1,int b1)
        {
            a=a1;
            b=b1;
        }
    Complex operator+(Complex r );
    Complex operator-(Complex r);
    Complex operator ++();
    Complex operator ++(int unused);
    void show()
    {
        cout<<"c3="<<a<<"+"<<b<<"i"<<endl;;
    }

  //Implement the  class Complex in such a way so that all operations in main function work perfectly.
};
Complex Complex ::operator +(Complex r)
{
    Complex obj;
    obj.a=a+r.a;
    obj.b=b+r.b;
    return obj;
}
Complex Complex ::operator -(Complex r)
{
    Complex obj;
    obj.a=a-r.a;
    obj.b=b-r.b;
    return obj; }
Complex Complex ::operator ++()
{
    ++a;
    ++b;
    return *this;
}
  Complex Complex ::operator ++(int unused)
{
    a++;
    b++;
    return *this;
}
int main()
{

  Complex C1(1,2), C2(4,5),C3;
   C3=C1+C2;
   C3.show();
   C3=C1-C2;
   C3.show();
   C3 = ++C1;
   C3.show();
   C3 = C2++;
   C3.show();
}
