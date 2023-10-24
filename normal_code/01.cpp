// 1.	Write C++ program to concatenate two strings

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    cin >> s >> s1;
    s += s1;
    cout << s << endl;
    return 0;
}

/*

input:
abc
def

output:
abcdef

*/