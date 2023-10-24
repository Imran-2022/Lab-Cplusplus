// 20.	C++ Program to Multiply two Floating Point Numbers.

#include <bits/stdc++.h>
using namespace std;

class Multiply_floating_nm{
    private:
        double x,y;
    public:
        void get_val(){
            cin>>x>>y;
        }
        void print();
};

void Multiply_floating_nm::print(){
    cout<<fixed<<setprecision(5)<<(x*y)<<endl;
}

int main()
{
    Multiply_floating_nm MF;
    MF.get_val();
    MF.print();
    return 0;
}

/*
input:
10.414 3.41

output:
35.51174


*/