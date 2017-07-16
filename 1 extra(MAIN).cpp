#include<iostream>
#include<math.h>
using namespace std;
class polar
{
	public:
		float r,th,x,y;
		polar(float a,float b)
		{
			r=a;
			th=b;
		}
		void call()
		{
			x=r*cos(th);
			y=r*sin(th);
		}
		void show()
		{
			cout<<"x="<<x<<" and y="<<y;

		}
};

int main()
{
    float r,th;
    cout<<"Enter the inputs of r & theta"<<endl;
    cin>>r>>th;
	polar p(r,3.14/180);
	p.call();
	p.show();

}

