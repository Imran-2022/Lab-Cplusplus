// 28.	C++ program using Polymorphism/function overloading characteristics.

#include <bits/stdc++.h>
using namespace std;
class overLod{
    public:
    int fun(int x,int y){
        return x*y;
    }
    int fun(int x){
        return x*x;
    }
};

int main()
{
    overLod abc;
    cout<<abc.fun(4,5)<<endl;
    cout<<abc.fun(5)<<endl;

    return 0;
}

/*

output:

20
25


*/