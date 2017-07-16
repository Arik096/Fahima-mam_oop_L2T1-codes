#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class convert
{
int number;
char *num_string;
//char de[10];
public:
void set_number(int n)
{
    number =n;

} // Assign n to number
void set_num_string(char *a)
{
num_string=new char[strlen(a+1)];
strcpy(num_string,a);

} // Assign string a to num_string
char *get_num_string()
{
return num_string;

} // Return num_string
void reverse_num_string()
{

strrev(num_string);
cout<<num_string<<endl;


} // Reverse num_string
void concate_to_num_string(int n)
{
char s[100];
int i=0;
while(n!=0)
{
    s[i]=n%10+48;
    n=n/10;
    i++;
}
s[i]=NULL;
cout<<strrev(s)<<endl;
cout<<strcat(num_string,s)<<endl;


 }// Convert n to a string then concate it with num_string
bool check_palindrome()
{
char *xy[20];
int c;
xy[20]=strrev(num_string);
c=strcmp(*xy,num_string);
if(c==0)
{
    return true;
}
else {return false;}


}

// Check if num_string is a palindrome
};
int main()
{
int p;
    convert a;
    a.set_num_string("madam");
    a.reverse_num_string();






     a.concate_to_num_string(123);
     a.reverse_num_string();
     p=a.check_palindrome();
     if(p==0)
        cout<<"ans:Not palindrom"<<endl;
     else
        cout<<"ans:palindrom"<<endl;

   return 0;

}
