// 19.	C++ Program to Swap Values of Two Variables.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int tmp=m;
        m=n;
        n=tmp;
    cout<<n<<" "<<m<<endl;
    return 0;
}

/*
input:
10 3

output:
3 10


*/