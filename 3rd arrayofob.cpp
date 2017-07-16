#include <iostream>
using namespace std;

class Number{
    private:
        int num;
    public:
        //default constructor
        Number(){num=0;}
        //parameterized constructor
        Number(int n){
            num=n;
        }
        //display number
        void dispNumber(){
            cout<<"Num is: "<<num<<endl;
        }
};

int main(){
    //declaration array of objects
    //with parameterized constructor
    Number N[3]={Number(40),Number(50),Number(60)};

    N[0].dispNumber();
    N[1].dispNumber();
    N[2].dispNumber();

    return 0;
}
