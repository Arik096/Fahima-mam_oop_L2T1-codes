#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char*name;
    int roll;
public:
    student(char*p,int r1)
    {
        name=new char[strlen(p)+1];
        strcpy(name,p);
        roll=r1;
    }
    char *get_name()
    {
        return name;
    }
    int get_roll()
    {
        return roll;
    }


};
class marks:public student
{
    char*S_name;
    int S_code ,I_marks ,E_marks;
public:
    marks(char*d,int x,int y,int z,char*n,int r):student(n,r)
    {
        S_name=new char[strlen(d)+1];
        strcpy(S_name,d);
        S_code=x;
        I_marks=y;
        E_marks=z;
    }
    void disp()
    {
        cout<<"Name of the student:"<<get_name()<<endl;
        cout<<"Roll no:"<<get_roll()<<endl;
        cout<<"Subject name:"<< S_name<<endl;
        cout<<"Subject code:"<<S_code<<endl;
        cout<<"Internal marks:"<<I_marks<<endl;
        cout<<"External marks:"<<E_marks<<endl;
    }

};


int main()
{
marks m("CSE",206,30,40,"Rahim",201314050);
m.disp();
return 0;
}





