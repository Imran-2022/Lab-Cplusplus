// 19.	C++ Program to Swap Values of Two Variables.

#include <bits/stdc++.h>
using namespace std;

class SwapP{
    private:
        int n,m;
    public:
        void get_val(){
            cin>>n>>m;
        }
        void swp(){
            int tmp=m;
            m=n;
            n=tmp;
        }
        void print();
};

void SwapP::print(){
    cout<<n<<" "<<m<<endl;

}


int main()
{
    SwapP sp;
    sp.get_val();
    sp.swp();
    sp.print();
    return 0;
}

/*
input:
10 3

output:
3 10


*/