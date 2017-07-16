#include<iostream>
using namespace std;
class area
{
    float x,y,z;
public:
    void crt(float p)
    {
        x=3.1416*p*p;
        cout<<"Area of circle:"<<x;
    }
    void crt(float p,float q)
         {
             y=p*q;
             cout<<"Area of rectangle:"<<y;
         }
          void crt(float p,float q,float u)
          {
              z=u*p*q;
              cout<<"Area of triangle:"<<z;
          }
};
int main()
{
    area a1;
    int n;
    float r,l,w,b,h,k;
    cout<<"1.Area of circle"<<endl;
    cout<<"2.Area of rectangle"<<endl;
    cout<<"3.Area of triangle"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"Radius:";
        cin>>r;
        a1.crt(r);
        break;
    case 2:
        cout<<"Length:";
        cin>>l;
        cout<<"Width:";
        cin>>w;
        a1.crt(l,w);
        break;
    case 3:
        cout <<"Base:";
        cin>>b;
        cout<<"Height:";
        cin>>h;
        a1.crt(b,h,0.5);
        break;
    default:
        cout<<"wrong input";
        break;

    }
    return 0;
}
