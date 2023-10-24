// 22.	C++ Program to convert feet to meter.

#include <bits/stdc++.h>
using namespace std;

class Convert{
    private:
        int feet;
    public:
        void get_val(){
            cin>>feet;
        }
        void print();

};

void Convert::print(){
    cout<<fixed<<setprecision(4)<<(feet*0.3048)<<endl;
}


int main()
{
    Convert F_M;
    F_M.get_val();
    F_M.print();
    return 0;
}

/*
input:
333

output:
101.4984


*/