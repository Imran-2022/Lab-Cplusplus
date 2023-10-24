// 6.	C++ program to check uppercase or lowercase alphabets.

#include <bits/stdc++.h>
using namespace std;

class Check{
    private:
        char ch;
    public: 
        void get_ch(){
            cin>>ch;
        }
        void print();
};

void Check::print(){
    if(ch>='a' && ch<='z')cout<<"lowercase"<<endl;
    else cout<<"uppercase"<<endl;  
}

int main()
{
    Check ck;
    ck.get_ch();
    ck.print();
    return 0;
}

/*
input:
a

output:
lowercase

*/