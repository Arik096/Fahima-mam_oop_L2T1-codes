#include<iostream>
using namespace std;
class Complex {
  //Implement the  class Complex in such a way so that all operations in main function work perfectly.
};
int main()
{

  Complex C1(1,2), C2(4,5),C3;
   C3=C1+C2;
   C3.show();
   C3=C1-C2;
   C3.show();
   C3 = ++C1;
   C3.show();
   C3 = C2++;
   C3.show();
}
