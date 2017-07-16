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
void setFunc(int a,int b,int c);
void getFunc();

};
    void date::setFunc(int a,int b,int c)
    {
        day=a;
        month=b;
        year=c;
    }
    void date::getFunc()
    {
        cout<<day<<" "<<month<<" "<<year<<" ";
    }

int main()
{
    int m,n,o;

    cin>>m>>n>>o;
    date ob(m,n,o);
    ob.getFunc();


}
