#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class convert
{
int number;
char *num_string;
public:
void set_number(int n)
{
  number=n;
} // Assign n to number
void set_num_string(char *a)
{
   num_string=new char[strlen(a)+1];
    strcpy(num_string,a);
} // Assign string a to num_string
char *get_num_string()
{
  return num_string;

} // Return num_string
void reverse_num_string()
{
  cout<<strrev(num_string)<<endl;



} // Reverse num_string
void concate_to_num_string(int n)
{
  char arr[50];
int i;
for( i=0;n!=0;i++)
    {arr[i]=n%10+48;
    n=n/10;}
    arr[i]='\0';
    strrev(arr);
    strcat(num_string,arr);
 }// Convert n to a string then concate it with num_string
bool check_palindrome()
{
int r;
char *s;
 s=new char[strlen(num_string)+1];
    strcpy(s,num_string);
    strrev(s);
    r=strcmp(s, num_string);
return r;
}

// Check if num_string is a palindrome
};
int main()
{

    convert a;
    a.set_num_string("madam");
    a.reverse_num_string();
    // cout<<a.get_num_string()<<endl

    //A.set_num_string("madam"
     //cout<<A.get_num_string()<<endl;

   // cout<<A.check_palindrome()<<endl
   if(a.check_palindrome()==0)

      cout<<"pelindrom"<<endl;

   else
    cout<<"not palindrom"<<endl;

   // a.set_number
   // a.concate_to_num_string(11);
    //a.reverse_num_string()



     a.concate_to_num_string(123);
     a.reverse_num_string();

   return 0;

}
