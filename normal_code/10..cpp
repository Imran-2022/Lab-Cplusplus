// 10.	C++ program to print day name of week.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int n;
    cin>>n;
    cout<<s[n-1]<<endl;
    return 0;
}

/*
input:
2

output:
Monday


*/