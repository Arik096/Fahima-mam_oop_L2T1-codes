#include<iostream>
using namespace std;

class distributor
{
    int b,a;
public:
    int setd(int x,int y)
    {
        b=x;
        a=y;
    }
    int geta()
    {
        return b;
    }
    int getb()
    {
        return a;
    }

};
class seller
{
    int t;
public:
    int sets(int z)
    {
        t=z;
    }
    int gett()
    {
        return t;
    }

};
class company:public distributor,public seller
{
public:
    void showds()
    {
        cout<<"Total branch"<<" "<<getb()<<endl;
        cout<<"Total amount"<<" "<<geta()<<endl;
        cout<<"Total buyier"<<" "<<gett()<<endl;
    }
};
int main()
{
   company ob;
   ob.setd(4,4000);
   ob.sets(5);

   ob.showds();
   return 0;
}
