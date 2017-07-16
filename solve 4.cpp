#include<iostream>
using namespace std;
#include<string.h>
class person
{
    char *name;
    int age;
//declare name and age as private variable ;
public:
    person(char*s,int i=0)
    {
        name=new char[strlen(s)+1];
        strcpy(name,s);
        age=i;
    }
    person(const person &m)
    {
        name=new char[strlen(m.name)+1];
        strcpy(name,m.name);
        age=m.age;
    }
//write necessary methods/constructor so that the main function works perfectly.
void disp()
{
   cout<<name<<" "<<age<<endl;
}
};
int main()
{
person p1("raju"),p2("siyam",20);
person p3=p2;
p1.disp();
p2.disp();
p3.disp();
}
