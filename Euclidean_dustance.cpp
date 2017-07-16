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
friend void add(dist,dist);
};
void add(dist s,dist h)
{    int k;
    float l;
    k=( pow(h.a-s.a,2)  +   pow(h.b-s.b,2) );
    l=pow(k,0.5);
    cout<<"Distance is:"<<l <<endl;
}
int main()
{
    dist m,n;
    m.get();
    n.get();
    add(m,n);
return 0;
}
