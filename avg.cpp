#include<iostream>
using namespace std;

class stream
{
    char name[100];
    int roll, marks[5];
public:
    void asng()
    {
        cin>>name;
        cin>>roll;
        for(int i=0; i<5; i++)
        {
            cin>>marks[i];
        }
    }

    int avg()
    {
        int sum;

        for(int i=0; i<5; i++)
        {
            sum=sum+marks[i];
        }

        sum=sum/5;

        return sum;
    }
};

int main()
{
    int average;
    stream ob;

    ob.asng();
    average=ob.avg();

    if(average>=90)
        cout<<"Computers"<<endl;
    if(80<=average && average<=89)
        cout<<"Electrical"<<endl;
    if(75<=average && average<=79)
        cout<<"Mechanical"<<endl;
    if(70<=average && average<=74)
        cout<<"Electronics"<<endl;

    return 0;
}

