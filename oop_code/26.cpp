//26.	C++ Program to Calculate Area of Square.


#include <bits/stdc++.h>
using namespace std;

class AreaSquare{
    private:
        double r;
    public:
        void get_val(){
            cin>>r;
        }
        void print();
};

void AreaSquare::print(){
    cout<<"area of square : "<<r*r<<endl;
}


int main()
{
    AreaSquare As;
    As.get_val();
    As.print();
    return 0;
}

/*
input:
5

output:
area of square : 25


*/