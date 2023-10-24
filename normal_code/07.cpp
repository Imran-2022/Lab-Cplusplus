// 7.	C++ program to check entered character vowel or consonant.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')cout<<"vowel"<<endl;
    else cout<<"consonant"<<endl;   
    return 0;
}

/*
input:
B

output:
consonant

*/