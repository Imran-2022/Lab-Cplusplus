//24.	C++ Program to convert farenheit to celcius.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double Fahrenheit;
    cin>>Fahrenheit;
    double Celsius=(Fahrenheit-32)*(9/5);
    cout<<fixed<<setprecision(2)<<Celsius<<endl;
    
    return 0;
}

/*
input:
54.00

output:
22


*/