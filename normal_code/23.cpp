// 23.	C++ Program to convert celcius to farenheit.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double Celsius;
    cin>>Celsius;
    double Farenheit=(Celsius*(9/5))+32;
    cout<<fixed<<setprecision(2)<<Farenheit<<endl;
    
    return 0;
}

/*
input:
22

output:
54.00


*/