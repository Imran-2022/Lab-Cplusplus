// 16.	Write C++ program to find sum of even numbers between 1 to n

#include <bits/stdc++.h>
using namespace std;

class Sum_e{
    private:
        int n,sum=0;
    public:
        void get_val(){
            cin>>n;
        }
        void calculation();
        void print();
};

void Sum_e::calculation(){
    for(int i=1;i<=n;i++){
        if(i&1)continue;
        sum+=i;
    }
}

void Sum_e::print(){
    cout<<sum<<endl;
}


int main()
{
    Sum_e SE;
    SE.get_val();
    SE.calculation();
    SE.print();
    
    return 0;
}

/*
input:
10

output:
30


*/