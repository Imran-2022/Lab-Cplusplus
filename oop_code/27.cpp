// 27.	C++ Program to Calculate Area of Rectangle.


#include <bits/stdc++.h>
using namespace std;

class Calculate{
    private:
        double l,w;
    public:
        void get_val(){
            cin>>l>>w;
        }
        void print();
};

void Calculate::print(){
    cout<<"area of rectangle : "<<l*w<<endl;
}


int main()
{
    Calculate cl;
    cl.get_val();
    cl.print();
    return 0;
}

/*
input:
5 6

output:
area of rectangle : 30



*/