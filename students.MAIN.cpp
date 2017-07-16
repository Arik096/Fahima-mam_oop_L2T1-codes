#include <iostream>
using namespace std;
class student
{
    int roll,marks[5];
    char name[20];
public:
    void assgn()
    {
        cin>>name>>roll;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
        cout<<name<<endl<<roll<<endl;


    }
    int average()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+marks[i];
        }
        sum=sum/5;
        return sum;
    }

};
int main()
{
    int avg;
    student ob;
    ob.assgn();
    avg=ob.average();


    if(avg>=90)
    {
        cout<<"Computers";
    }
    if(avg>=80 && avg<=89)
    {
        cout<<"Electrical";
    }
    if(avg>=75 && avg<=79)
    {
        cout<<"Mechanical";
    }
    if(avg>=70 && avg<=74)
    {
        cout<<"Electronics";
    }

}
