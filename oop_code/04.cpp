// 4.	C++ Program to find the largest number among three number.

#include <bits/stdc++.h>
using namespace std;


class FindLargest{
    private:
    int a,b,c;
    public:
        void get_num(){
            cin>>a>>b>>c;
        }
        void large();
};

void FindLargest::large(){
    cout<<max({a,b,c})<<endl;
}


int main()
{
    FindLargest Lg;
    Lg.get_num();
    Lg.large();
    return 0;
}

/*
input:
4 2 3

output:
4


*/