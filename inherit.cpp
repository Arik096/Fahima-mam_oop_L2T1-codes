#include<iostream>
#include<cstring>
using namespace std;
#include<fstream>
class person
{
    char *name,gender;
    int age;
public:
    person()
    {

    }
    void set(char *n,char g,int a)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        gender=g;
        age=a;
    }
    void show()
    {
       cout<<"Name:"<<name<<endl<<endl;
       cout<<"Gender:"<<gender<<endl<<endl;
       cout<<"Age:"<<age<<endl<<endl;
    }

};
class student:virtual public person
{
    int id;
    char *dept;
public:
    student()
    {

    }

    void set(int i,char *d)
    {
        id=i;
        dept=new char[strlen(d)+1];
        strcpy(dept,d);
    }
    void show()
    {
       cout<<"ID:"<<id<<endl<<endl;
       cout<<"Department:"<<dept<<endl<<endl;
    }

};
class worker: virtual public person
{
    int salary;
    char *comp;
    public:
        worker()
        {

        }
    void set(int s,char*c)
    {
       salary=s;
       comp= new char[strlen(c)+1];
       strcpy(comp,c);
    }
    void show()
    {
        cout<<"Salary:"<< salary<<endl<<endl;
        cout<<"Company name:"<<comp<<endl<<endl;
    }

};
class partime_student:public student,public worker
{
public:
    partime_student()
    {

    }
    void set(char *n,char g,int a,int i,char *d,int s,char*c)
    {
        person::set(n,g,a);
        student::set(i,d);
        worker::set(s,c);

    }
    void show()
    {
        person::show();
        student::show();
        worker::show();

    }

};
main()
{
    char na[20],ge,de[10],cm[20];
    int ag,idd,sa;
    freopen ("in.txt","r",stdin);
    int n;
    cin>>n;
    int *p;
    for(int i=0;i<n;i++)
    {
    cin>>na>>ge>>de>>cm>>ag>>idd>>sa;
    *p++;
    }
    partime_student ob;
    ob.set();
    ob.show();
    return 0;
}
