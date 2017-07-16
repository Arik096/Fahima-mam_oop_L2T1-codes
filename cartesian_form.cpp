#include<iostream>
#include<math.h>
using namespace std;
class convert
{
    double x,y,x1,y1;
public:
    void polar(double b,double c)
    {
        x=b;
        y=c;
    }
    void cartesian()
    {
        x1=x*(cos(((3.1416/180)*y)));
        y1=x*(sin(((3.1416/180)*y)));
    }
    void display()
    {
        cout<<"x="<<x1<<endl<<"y="<<y1;
    }

};
int main()
{
    convert ob1;
    double r,a;
    cout<<"Enter the radius:";
    cin>>r;
    cout<<"Enter the angle:";
    cin>>a;
    ob1.polar(r,a);
    ob1.cartesian();
    ob1.display();
    return 0;

}
