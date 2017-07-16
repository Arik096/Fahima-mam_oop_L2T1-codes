#include <iostream>
using namespace std;
class Number{
    private:
        int num;
    public:
        //default constructor
        Number()
        {

        }

        //parameterized constructor
        Number(int a)
        {
            num=a;
        }

        //display number
        void display()
        {
            cout<<num<<endl;
        }


};

int main()
{
    //declaration array of objects
    Number ob1[5]={1,2,3,4,5};

    //with parameterized constructor

for(int i=0;i<5;i++)
{
    ob1[i].display();
}
   //display the value of the array.

    return 0;
}
