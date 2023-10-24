// 23.	C++ Program to convert celcius to farenheit.

#include <bits/stdc++.h>
using namespace std;

class C_to_F{
    private :
        double Celsius;
    public:
        void get_val(){
            cin>>Celsius;
        }
        void print();
};

void C_to_F::print(){
    double Farenheit=(Celsius*(9/5))+32;
    cout<<fixed<<setprecision(2)<<Farenheit<<endl;
}

int main()
{
    C_to_F CF;
    CF.get_val();
    CF.print();    
    return 0;
}

/*
input:
22

output:
54.00


*/