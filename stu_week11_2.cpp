#include<iostream>
using namespace std;
#include<cstring>
class Student
{
char *name;
int age;
public:
    Student()
    {
        name=new char(100);
    }
Student(char *s,int a)
{
        name=new char[strlen(s)+1];
        strcpy(name,s);
        age=a;
}
void getdata()
{
 //take input here;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter age:"<<endl;
    cin>>age;
}
void print()
{
 //print the value;
    cout<<"Name="<<name<<endl;
    cout<<"Age="<<age<<endl;
}
friend void buble_sort(Student *S,int p);
};
void buble_sort(Student *S,int p)
{
    for(int i=p;i>1;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(S[j].age>S[j+1].age)
            {
                Student temp=S[j+1];
                S[j+1]=S[j];
                S[j]=temp;
            }
        }
    }
}
int main()
{
 //declare an array of object and take input in this,print the value of the array.
 //then
 Student obj[100];
int N,i,j;

cout<<endl<<"Enter maximum number of records u want to enter:-> ";
cin>>N;
//take the input and save it in obj array.
for(i=0;i<N;i++)
{
    obj[i].getdata();
}
cout<<endl<<"U have entered following records:";
//print the value of the array
for(i=0;i<N;i++)
{
    obj[i].print();
}

buble_sort(obj,N);

}

