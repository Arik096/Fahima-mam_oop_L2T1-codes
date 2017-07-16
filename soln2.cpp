#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include <sstream>
#include <string>
#include <iomanip>
#include <locale>
using namespace std;
class convert
{
int number;
string num_string;
public:
void set_number(int n)
{
    number=n;
}
void set_num_string(string a)
{
    num_string=a;
}
string get_num_string()
{
    return num_string;
}
void reverse_num_string()
{
    reverse(num_string.begin(),num_string.end());
    cout<<num_string<<endl;
}
void concate_to_num_string(int n)
{
int Number = n;
string String = static_cast<ostringstream*>( &(ostringstream() << Number) )->str();
num_string+=String;
}
bool check_palindrome()
{
int l=num_string.length();
for(l = 0;num_string[l] != '\0'; l++);
int i;
for(i = 0; (i < l/2) && (num_string[i] == num_string[l - i - 1]); i++);
    if(i == l/2)
        return true;
    else
        return false;
}
};
int main()
{
    convert a;
    a.set_num_string("madam");
    a.reverse_num_string();
    cout<<a.check_palindrome()<<endl;
     ///cout<<a.get_num_string()<<endl;
    ///a.set_num_string("madam");
     ///cout<<a.get_num_string()<<endl;
   ///a.set_number(11);
    ///a.concate_to_num_string(11);
    ///a.reverse_num_string();
    a.concate_to_num_string(123);
    a.reverse_num_string();
    cout<<a.check_palindrome()<<endl;
    return 0;
}

