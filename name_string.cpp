#include<iostream>
#include<cstring>
using namespace std;
void getfunc(char *p)
{
   char *s;
   s=p;
   while (*s!='\0')
   {
       cout<<*s;
       s++;
   }
}
int main()
{
    char ar[100];
    cout<<"Enter your name:";
    cin.getline(ar,100);
    //getfunc(ar);
     return 0;
}
