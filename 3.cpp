#include<iostream>
#include<cstring>
using namespace std;

class A
{
	//declare name and weight as private variable


public:
A()
{
}
A(char *name,double w)
{



}

void set(char *name,double w )
{




}
void show()
{


}
};

class B
 {			//inherit A class as protected
	//declare age and fathername as private varible

protected:
B()
{
}
B(int a,char *f)
{


}
void set(char *f,int a)
{




}
void  show()
{


}
};

class C
 {			//inherit A class as protected
	//declare gender and mothername as private variable

protected:
C()

{
}
C(char *m,char g)
{



}

void set(char *m,int g)
{


}
void show()
{



}
};

class citizen
 {		//inherit B and C classes

public:
citizen()
{}
void set(char *name,double w,char *f,int a,char *m,char g)
{



}
void  show( )
{


}
};

int  main()
{
  citizen ob;
  ob.set("anika",50.55,"salim",56,"lipa",'f');
  ob.show();

    return 0;

}

