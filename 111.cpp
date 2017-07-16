#include<iostream>
using namespace std;

class Bits
{
    int x;
public:
    Bits(){}
    friend istream& operator >>(istream &in,Bits &ci);
    friend ostream& operator <<(ostream &out,Bits &co);

    Bits operator &(Bits a);
    Bits operator ^(Bits a);
    Bits operator !();
    Bits operator |(Bits a);

};

Bits Bits :: operator &(Bits a)
    {
        Bits temp ;
        temp.x=x&a.x;

        return temp;

    }

Bits Bits :: operator ^(Bits a)
    {
        Bits temp ;
        temp.x=x^a.x;

        return temp;

    }
Bits Bits :: operator !()
    {
        Bits temp ;
        temp.x=!x;

        return temp;

    }
Bits Bits :: operator |(Bits a)
    {
        Bits temp ;
        temp.x=x|a.x;

        return temp;

    }

istream& operator >>(istream &in,Bits &ci)
{
   in>>ci.x;
   return in;
}

ostream& operator <<(ostream &out,Bits &co)
{
   out<<co.x;
   return out;
}



int main()
{

Bits b1, b2;
cin>>b1;
cin>>b2;

Bits b3 = b1 & b2;//do  Bitwise AND operation;  //Shakhawat
cout<< "AND \t" << b3 <<endl;

Bits b4 = !(b3);//do Bitwise NAND operation ;
cout<< "NAND \t" << b4 <<endl;

Bits b5 = b1 | b2; //do Bitwise OR operation;
cout<< "OR \t" << b5 <<endl;

Bits b6 = !(b5);// do Bitwise NOR operation;
cout<< "NOR \t" << b6 <<endl;

Bits b7 = b1^b2; // do Bitwise XOR operation;
cout<< "XOR \t" << b7 <<endl;

Bits b8 = !(b7);// do Bitwise XNOR operation;
cout<< "XNOR \t" << b8 <<endl;

Bits b9 = !(b1); //NOT operation;
cout<< "NOT \t" << b9 <<endl;

}

