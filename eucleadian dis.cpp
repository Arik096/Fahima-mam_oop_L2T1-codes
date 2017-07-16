#include<iostream>
#include<math.h>
using namespace std;
class dist{
    int a,b;
public:
    void get()
{
    cout<<"Enter the  value of a point"<<endl;
    cin>>a>>b;
}
friend void calc(dist,dist);
};
void calc(dist s,dist h)
{    int k;
    float l;
    k=( pow(h.a-s.a,2)  +   pow(h.b-s.b,2) );
    l=pow(k,0.5);
    cout<<"Distance between point(A1,A2) and (B1,B2) is:"<<l <<endl;
}
int main()
{
    dist m,n;
    m.get();
    n.get();
    calc(m,n);
return 0;
}
