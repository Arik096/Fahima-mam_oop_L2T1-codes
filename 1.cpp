#include<iostream>
using namespace std;
inline int Max(int,int);
inline int Min(int, int);
int main()
{
    int l,m;
    cin>>l>>m;
    cout<<"Max is:"<<Max(l,m)<<endl;
    cout<<"Min is:"<<Min(l,m)<<endl;

}
inline int Max(int p,int q)
{
    return (p>q ? p:q);
}
inline int Min(int p,int q)
{
    return (p<q ? p:q);
}
