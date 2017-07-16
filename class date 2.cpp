#include <iostream>
using namespace std;
class date{
    int day, month,year;
public:
     date(int a,int b, int c)
    {
        day=a;
        month=b;
        year=c;
    }
void setFunc(int p,int q,int r)
    {
        day=p;
        month=q;
        year=r;
    }
    void getFunc()
    {
        cout<<day<<" "<<month<<" "<<year<<" ";
    }
};
int main()
{
    date ob(6,7,1996);
    ob.getFunc();
    int l,m,n;
    cin>>l>>m>>n;
    ob.setFunc(l,m,n);
    ob.getFunc();

}

