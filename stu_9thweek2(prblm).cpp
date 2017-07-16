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

} // Assign n to number
void set_num_string(char *a)
{


} // Assign string a to num_string
char *get_num_string()
{


} // Return num_string
void reverse_num_string()
{




} // Reverse num_string
void concate_to_num_string(int n)
{



 }// Convert n to a string then concate it with num_string
bool check_palindrome()
{


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
   // cout<<A.check_palindrome()<<endl;
   // a.set_number(11);
   // a.concate_to_num_string(11);
    //a.reverse_num_string();




     a.concate_to_num_string(123);
     a.reverse_num_string();

   return 0;

}
