// 16.	Write C++ program to find sum of even numbers between 1 to n

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i&1)continue;
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}

/*
input:
10

output:
30


*/