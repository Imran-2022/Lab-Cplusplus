// 15.	Write C++ program to print multiplication table of a given number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<n<<" * "<<i<<" =  "<<i*n<<endl;
    }
    return 0;
}

/*
input:

10

output:

10 * 1 =  10
10 * 2 =  20
10 * 3 =  30
10 * 4 =  40
10 * 5 =  50
10 * 6 =  60
10 * 7 =  70
10 * 8 =  80
10 * 9 =  90
10 * 10 =  100


*/