#include<iostream>
using namespace std;

main()
{
    int n, i, j, k, l=1, p=2, x, y=1, q, r, s, t;

    cin>>n;

    for(i=(n-1); i>0; i--)
    {
        for(j=i;j>0; j--)
        {
            cout<<"-"<<" ";
        }

        for(k=l;k<p; k++)
        {
            cout<<k<<" ";


        }
        l++;
        p=p+2;
        y=y+2;


        cout<<endl;
    }



    for(x=n; x<=y; x++)
        {
            cout<<x<<" ";

        }
    cout<<endl;
    y=y-2;

    for(q=1; q<=(n+2); q++)
    {
        for(r=q;r>0; r--)
        {
            cout<<"-"<<" ";
        }

        for(t=(n-1);t<=y; t++)
        {
            cout<<t<<" ";

        }
        y=y-2;
        n=n-1;


        cout<<endl;
    }


    return 0;
}

