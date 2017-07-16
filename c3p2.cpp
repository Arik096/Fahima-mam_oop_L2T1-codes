#include<iostream>
using namespace std;
class swap2;
class swap1
{
    int x;
    public:
        swap1(int a)
        {
            x=a;
        }
     int sr(swap2 t);
};
class swap2
{
    int x;
   public:
       swap2(int b)
       {
           x=b;
       }
  friend int swap1:: sr(swap2 t);
};
int swap1 :: sr(swap2 t)
{
    t.x=x + t.x;
    x=t.x - x;
    t.x=t.x - x;
    cout<<x<<" "<<t.x;
}

int main()
{
    int g,h;
    cin>>g>>h;
    swap1 ob1(g);
    swap2 ob2(h);
    ob1.sr(ob2);
}


