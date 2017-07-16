#include<iostream>
using namespace std;
class Complex
{
  //Implement the  class Complex in such a way so that all operations in main function work perfectly.
  int x,y;
  public:
      Complex()
      {
          x=y=0;
      }
      Complex(int x1,int y1)
      {
          x=x1;
          y=y1;
      }
      Complex operator+(Complex r);
      Complex operator-(Complex r);
      Complex operator++();
      Complex operator++(int unused);
      void show()
      {
          if(y<=0)
          {
              cout<<"C3="<<x<<y<<"i"<<endl;
          }
          else
          {
              cout<<"C3="<<x<<"+"<<y<<"i"<<endl;
          }
      }
};
Complex Complex::operator+(Complex r)
{
    Complex ob;
    ob.x=x+r.x;
    ob.y=y+r.y;
    return ob;

}
Complex Complex::operator-(Complex r)
{
    Complex ob;
    ob.x=x-r.x;
    ob.y=y-r.y;
    return ob;

}
Complex Complex::operator++()
{
     ++x;
     ++y;
     return *this;

}
Complex Complex::operator++(int unused)
{
     x++;
     y++;
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
   return 0;
}
