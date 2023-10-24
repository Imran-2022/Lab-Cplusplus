// 17.	Write C++ program to find sum of odd numbers between 1 to n

#include <bits/stdc++.h>
using namespace std;

class Sum_odd{
    private:
        int n,sum=0;
    public:
        void get_val(){
            cin>>n;
        }
        void Calculation();
        void print();
};

void Sum_odd::Calculation(){
    for(int i=1;i<=n;i++){
        if(i&1)sum+=i;
    }
}
void Sum_odd::print(){
    cout<<sum<<endl;
}


int main()
{
    Sum_odd SO;
    SO.get_val();
    SO.Calculation();
    SO.print();
    
    return 0;
}

/*
input:
10

output:
25


*/