// 3.	C++ Program to check whether an integer entered by the user is odd or even

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a&1)cout<<"odd"<<endl;
    else cout<<"even"<<endl;
    return 0;
}

/*
input:
11221

output:
odd


*/