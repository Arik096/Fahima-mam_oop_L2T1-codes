#include<iostream>
using namespace std;
int main()
{
    int i,j,l,n;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(l=n;l>=i;l--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
     for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(l=1;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;

}
