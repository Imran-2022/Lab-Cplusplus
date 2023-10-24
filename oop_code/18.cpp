// 18.	Write a C++ program to compute the quotient and remainder.  

#include <bits/stdc++.h>
using namespace std;

class Cal{
    private:
        int n,m;
    public:
        void get_val(){
            cin>>n>>m;
        }
        void print_q();
        void print_r();
};

void Cal::print_q(){
    cout<<"quotient : "<<n/m<<endl;

}
void Cal::print_r(){
    cout<<"remainder : "<<n%m<<endl;

}


int main()
{
    Cal cl;
    cl.get_val();
    cl.print_q();
    cl.print_r();
    return 0;
}

/*
input:
10 3

output:
quotient : 3
remainder : 1


*/