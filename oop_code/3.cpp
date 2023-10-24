// 3.	C++ Program to check whether an integer entered by the user is odd or even

#include <bits/stdc++.h>
using namespace std;

class Check{
    private:
        int n;
    public:
        void get_n(){
            cin>>n;
        }
        void check_even_odd();
};

void Check ::check_even_odd(){
    if(n&1)cout<<"odd"<<endl;
    else cout<<"even"<<endl;
}

int main()
{
    Check ck;
    ck.get_n();
    ck.check_even_odd();
    return 0;
}

/*
input:
11221

output:
odd


*/