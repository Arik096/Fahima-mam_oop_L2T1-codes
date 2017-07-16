#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(j=1,b=i;j<=i;j++,b++)
        {
            cout<<b;;

        }
        cout<<"\n";
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(j=1,b=i;j<=i;j++,b++)
        {
            cout<<b;

        }
        cout<<"\n";
    }

    return 0;
}
