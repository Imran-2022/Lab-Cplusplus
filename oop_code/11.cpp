//11.	C++ program to accept two integers and check whether they are equal or not.

#include <bits/stdc++.h>
using namespace std;

class Check{
    private:
        int a,b;
    public:
        void get_val(){
            cin>>a>>b;
        }
        void print();
};

void Check::print(){
  if(a==b)cout<<"Equal"<<endl;
    else cout<<"Not Equal"<<endl;
}

int main()
{
    Check ck;
    ck.get_val();
    ck.print();
    return 0;
}


/*
input:
2 2

output:
Equal

*/