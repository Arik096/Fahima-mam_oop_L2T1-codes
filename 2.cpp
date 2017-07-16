#include<iostream>
using namespace std;

class pointer
{
    char s1;
    int r,i;
public:
    pointer(char c,int x,int y)
    {
        s1=c;
        r=x;
        i=y;
    }
    friend pointer operator++(int unused);
    friend pointer operator++();
    friend pointer operator--(int unused);
    friend pointer operator+(int p);
};
