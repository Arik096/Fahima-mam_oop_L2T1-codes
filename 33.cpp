#include<iostream>
using namespace std;
class Complex
{
    int r, i;
public:
    Complex(int x,int y)
    {
        r=x;
        i=y;
    }
    bool operator>(Complex &p);
    bool operator==(Complex &p);
    bool operator<(Complex &p);
    bool operator!=(Complex &p);



};
bool Complex:: operator>(Complex &p)
{
  if(r>p.r && i>p.i)
  {
      return true;
  }
  else
  {
      return false;
  }
}
bool Complex::operator==(Complex &p)
{
    if(r==p.r && i==p.i)
  {
      return true;
  }
  else
  {
      return false;
  }
}
bool Complex::operator<(Complex &p)
{
     if(r<p.r && i<p.i)
  {
      return true;
  }
  else
  {
      return false;
  }
}
bool Complex::  operator!=(Complex &p)
{
     if(r!=p.r && i!=p.i)
  {
      return true;
  }
  else
  {
      return false;
  }
}
int main()
{
  Complex C1(1,2), C2(4,5), C3(1,2);
  if (C1> C2) cout<< "Greater"<<endl;
  if (C1==C3) cout<< "Equal"<<endl;
  if (C1 < C2) cout<< "Smaller"<<endl;
  if(C1!=C2) cout<<"Not equal"<<endl;
  return 0;

}
