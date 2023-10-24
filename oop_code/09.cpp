// 9.	C++ program to check a n is leap n or not.

#include <bits/stdc++.h>
using namespace std;

class Check{
    private:
        int n;
    public:
        void get_year(){
            cin>>n;
        }
        void print();
};

void Check::print(){
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))cout<<"Leap Year"<<endl;
    else cout<<"Not a Leap Year"<<endl;
}

int main()
{
    Check ck;
    ck.get_year();
    ck.print();
    return 0;
}

/*
input:
2024

output:
Leap Year


*/