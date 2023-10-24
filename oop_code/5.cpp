// 5.	C++ program to check number is positive, negative or zero.

#include <bits/stdc++.h>
using namespace std;

class Check{
    private:
        int a;
    public:
        void get_nm(){
            cin>>a;
        }
        void print();
};

void Check::print(){
    if(a>0)cout<<"Positive"<<endl;
    else if(a<0)cout<<"Negative"<<endl;
    else cout<<"Zero"<<endl;
}


int main()
{
    Check ck;
    ck.get_nm();
    ck.print();
    
    return 0;
}

/*
input:
-1

output:
Negative


*/