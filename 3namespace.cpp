#include<iostream>
using namespace std;

namespace func1{

    int add(int x, int y)
        {
            int z;

            z=x+y;

            return z;
        }

}

namespace func2{

    void add(int x, int y)
        {
            int z;

            z=x+y;

            cout<<z;
        }

}

using namespace func1;

main(){
        int a;

        a=add(5,4);

        cout<<a;

        cout<<endl;

        func2::add(6,7);


        return 0;
}
