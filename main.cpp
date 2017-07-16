#include<iostream>
using namespace std;
class Complex {
  int a,b ;
  public:
      Complex(){a=0;b=0;}
      Complex(int x,int y){a=x;b=y;}
      Complex operator +(Complex p);
      Complex operator -(Complex p);
      Complex operator ++();
      Complex operator ++(int unused);
      void show()
      {
          if(b<=0)
          {
              cout<<a<<b<<"i"<<endl;
          }
          else
          {
              cout<<a<<"+"<<b<<"i"<<endl;
          }

      } //Implement the  class Complex in such a way so that all operations in main function work perfectly.
};
Complex Complex :: operator +(Complex p)
{
    Complex o;
    o.a=a+p.a;
    o.b=b+p.b;
    return o;
}
Complex Complex :: operator -(Complex p)
{
    Complex o;
    o.a=a-p.a;
    o.b=b-p.b;
    return o;
}
Complex Complex :: operator ++()
{

    a++;
    b++;
    return *this;
}
Complex Complex :: operator ++(int unused)
{

    ++a;
    ++b;
    return *this;
}
int main()
{

   Complex C1(1,2), C2(4,5),C3;
   C3=C1+C2;
   C3.show();
   C3=C1-C2;
   C3.show();
   C3=++C1;
   C3.show();
   C3 = C2++;
   C3.show();
}
