#include<iostream>
#include<cstring>
using namespace std;

class Student
{
protected:
    int roll;
    char*name;
public:
    Student()
    {

    }
    student (int i,char *n)
    {
        name=new char[strlen(n+1)];
        strcpy(name,n);
        roll=i;
    }
};
class Marks:public Student
{

    char *subName;
    int subCode;
    double internal;
    double external;

public:
    Marks()
    {

    }
    Marks(char *subN,int subC,int i,int e,char *n,int r):Student (r,n)
    {
        subName=new char[strlen(subN+1)];
        strcpy(subName,subN);
        subCode=subC;
        internal=i;
        external=e;
    }
    void disp()
    {
        cout<<"STUDENT NAME:"<<name<<endl;
        cout<<"ROLL:"<<roll<<endl;
        cout<<"SUBJECT NAME:"<<subName<<endl;
        cout<<"SUBJECT CODE:"<<subCode<<endl;
        cout<<"INTERNAL MARKS:"<<internal<<endl;
        cout<<"EXTERNAL MARKS:"<<external<<endl;
    }
};



    int main()
    {
        Marks m("CSE",206,30,40,"Rahim",201314050);
        m.disp();

        return 0;
    }
