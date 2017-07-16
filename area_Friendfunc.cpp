#include<iostream>
#include<math.h>
using namespace std;
class triangle;
class rectangle
{
    int a,b,c;
public:
    int getfunc(int x,int y)
    {
        c=x*y;
        cout<<"Area of rectangle:"<<c<<endl;
    }
 friend int add(rectangle,triangle);

};

class triangle
{
    int base,hight,ar;
public:

    int getfunc(int bs,int ht)
    {
        ar=bs*ht*0.5;
        cout<<"Area of Triangle:"<<ar<<endl;
    }
     friend int add(rectangle,triangle);
} ;
int add(rectangle R,triangle T)
{
    cout<<"Total Area:"<<R.c+T.ar<<endl;
}
int main()
{
    int ln,wd,ab,bc;
    rectangle ob1;
    triangle ob2;
    cout<<"Enter the length:";
    cin>>ln;
    cout<<"Enter the width:";
    cin>>wd;
    cout<<"Enter the base:";
    cin>>ab;
    cout<<"Enter the height:";
    cin>>bc;
    ob1.getfunc(ln,wd);
    ob2.getfunc(ab,bc);
    add(ob1,ob2);
    return 0;
}
