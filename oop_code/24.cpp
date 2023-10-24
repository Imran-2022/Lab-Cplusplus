//24.	C++ Program to convert farenheit to celcius.

#include <bits/stdc++.h>
using namespace std;

class F_to_C{
    private:
        double Fahrenheit;
    public:
        void get_val(){
            cin>>Fahrenheit;
        }
        void print();
};

void F_to_C::print(){
    double Celsius=(Fahrenheit-32)*(9/5);
    cout<<fixed<<setprecision(2)<<Celsius<<endl;
}

int main()
{
    F_to_C FC;
    FC.get_val();
    FC.print();
    return 0;
}

/*
input:
54.00

output:
22.00


*/