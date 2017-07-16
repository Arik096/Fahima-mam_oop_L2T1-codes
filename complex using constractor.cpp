#include<iostream>
using namespace std;
class complx
{
    int real,imag;
    public:
          complx(int a,int b)
          {
              real = a;
              imag= b;
          }
          complx()
          {

          }
          void show()
          {
              cout<<real<<"+"<<imag<<"i";
          }
     friend complx sum(complx x,complx y);
};
 complx sum(complx x,complx y)
{
    complx c;
    c.real = x.real + y.real;
    c.imag = x.imag + y.imag;
    return c;
}
int main()
{
    complx c, a1(10,5),b1(2,4);
    c = sum(a1,b1);
    c.show( );
    return 0;
}
