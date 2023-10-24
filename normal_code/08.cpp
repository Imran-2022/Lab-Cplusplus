// 8.	C++ program to check whether a character is alphabet, digit or special character.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(isalpha(ch))cout<<"alphabet"<<endl;
    else if(isdigit(ch))cout<<"digit"<<endl;
    else cout<<"special character"<<endl;
    return 0;
}

/*
input:
-

output:
special character


*/