// 21.	C++ Program to perform all arithmetic operations.

#include <bits/stdc++.h>
using namespace std;

class Arith_matic{
    private:
        int n,m;
    public:
        void get_val(){
            cin>>n>>m;
        }
        void print();
};

void Arith_matic::print(){
    cout<<"summation : "<<n+m<<endl;
    cout<<"multiplication : "<<n*m<<endl;
    cout<<"division : "<<n*1.0/m<<endl;
    cout<<"addition : "<<n+m<<endl;
}


int main()
{
    Arith_matic AM;
    AM.get_val();
    AM.print();
   
    return 0;
}

/*
input:
30 20

output:

summation : 50
multiplication : 600
division : 1.5
addition : 50


*/