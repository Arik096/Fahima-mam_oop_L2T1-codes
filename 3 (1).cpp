#include<iostream>
#include<cstring>
using namespace std;

class A
{
	char *nm;
	double wt;//declare name and weight as private variable

public:
A()
{
}

void set(char *name,double w )
{


    nm=new char[strlen(name)+1];
    strcpy(nm,name);
    wt=w;


}
void show()
{
  cout<<"Name:"<<nm<<endl<<endl;
  cout<<"Weight:"<<wt<<endl<<endl;

}
};

class B:virtual protected A
 {			//inherit A class as protected
	int ag;
	char *fr;//declare age and fathername as private varible

protected:
B()
{
}
void set(char *f,int a)
{
     fr=new char[strlen(f)+1];
     strcpy(fr,f);

     ag=a;


}
void  show()
{

cout<<"Father's name:"<<fr<<endl<<endl;
cout<<"Age:"<<ag<<endl<<endl;
}
};

class C:virtual protected A
 {			//inherit A class as protected
	char *mr,gn;//declare gender and mothername as private variable

protected:
C()
{
}
void set(char *m,int g)
{

    mr=new char[strlen(m)+1];
    strcpy(mr,m);
    gn=g;

}
void show()
{
cout<<"Mother's name:"<<mr<<endl<<endl;
cout<<"Gender:"<<gn<<endl;


}
};

class citizen:public B,public C
 {		//inherit B and C classes

public:
citizen()
{}
void set(char *name,double w,char *f,int a,char *m,char g)
{

 A::set(name,w);
 B::set(f,a);
 C::set(m,g);

}
void  show( )
{
   A::show();
   B::show();
   C::show();

}
};

int  main()
{
  citizen ob;
  ob.set("anika",50.55,"salim",56,"lipa",'f');
  ob.show();

    return 0;

}

