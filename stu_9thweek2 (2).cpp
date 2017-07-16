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
   char ar1[100];
   int i;
   while(n!=0)
   {

     ar1[i]=n%10+48;
     n=n/10;
     i++;
   }
   ar1[i]='\0';
   char arr[100]=strrev(ar1);
   cout<<strcat(num_string,arr);
 }// Convert n to a string then concate it with num_string
bool check_palindrome()
{
    char *s;
    s =strrev(num_string);
   int r=strcmp(s,num_string);
    return r;
}

// Check if num_string is a palindrome
};
int main()
{

    convert a;
    a.set_num_string("madam");
    a.reverse_num_string();
    // cout<<a.get_num_string()<<endl;
    //A.set_num_string("madam");
     //cout<<A.get_num_string()<<endl;



    //cout<<A.check_palindrome()<<endl;

   // a.set_number(11);
   // a.concate_to_num_string(11);
    //a.reverse_num_string();




     a.concate_to_num_string(123);
     a.reverse_num_string();

   return 0;

}
