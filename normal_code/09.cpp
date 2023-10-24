// 9.	C++ program to check a n is leap n or not.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))cout<<"Leap Year"<<endl;
    else cout<<"Not a Leap Year"<<endl;
    return 0;
}

/*
input:
2024

output:
leap n


*/