#include<iostream>
#include<math.h>
using namespace std;

class triangle;

class rectangle
{
    int length;
    int breadth;
    int areaR;
public:
    int getarea(int m,int n)
    {

        areaR= m * n;
        cout << "Area Rectangle:= " << areaR << "\n";
    }
    friend int addboth(rectangle ,triangle );
};

class triangle
{
    int base;
    int height;
    int areaT;
public:
    int getarea(int ba,int hi)
    {

        areaT= .5*ba*hi;
        cout << "Area Triangle: = " << areaT << "\n";
    }
    friend int addboth(rectangle ,triangle );
};
int addboth(rectangle R,triangle T)
{

    cout<<"Total Area:"<<R.areaR+T.areaT<<endl;
}
int main()
{
    int m,n;
    int ba,hi;
    rectangle r;
    triangle t;
    cout << "Enter length of rectangle :";
    cin >> m ;
    cout << "Enter breadth of rectangle: ";
    cin >> n ;
    cout << "Enter base of triangle :";
    cin >> ba ;
    cout << "Enter height of triangle: ";
    cin >> hi ;
    r.getarea(m,n);
    t.getarea(ba,hi);
    addboth(r,t);

    return 0;
}
