#include<iostream>
#include<cstring>
using namespace std;
class info
{
    char name[100];
    int marks[5],roll;
public:
     void asign()
     {
        cout<<"Enter name:";
        cin.getline(name,100);
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter marks of subjects:"<<endl;
        for(int i=0;i<=5;i++)
           {
               cout<<"sub"<<"["<<i<<"]"<<"=";
               cin>>marks[i];
           }
    }
    int avg()
    {
        int sum;
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
    info ob1;
    ob1.asign();
    int a=ob1.avg();
    if(a>90)
    {
        cout<<"COMPUTERS";
    }
    else if(a>=80 && a<90)
    {
        cout<<"ELECTRICAL";
    }
    else if(a>=75 && a<80)
    {
        cout<<"MECHANICAL";
    }
    else if(a>=70 && a<75)
    {
        cout<<"ELECTRONICS";
    }
    return 0;

}
