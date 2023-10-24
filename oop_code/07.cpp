// 7.	C++ program to check entered character vowel or consonant.

#include <bits/stdc++.h>
using namespace std;

class Check{
    private:
        char ch;
    public:
        void get_ch(){
            cin>>ch;
        }
        void print();
};

void Check::print(){
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')cout<<"vowel"<<endl;
    else cout<<"consonant"<<endl;  
}


int main()
{
    Check ck;
    ck.get_ch();
    ck.print();
    return 0;
}

/*
input:
B

output:
consonant

*/