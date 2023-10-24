// 8.	C++ program to check whether a character is alphabet, digit or special character.

#include <bits/stdc++.h>
using namespace std;

class Ck{
    private:
        char ch;
    public:
        void get_ch(){
            cin>>ch;
        }
        void print();
};

void Ck::print(){
    if(isalpha(ch))cout<<"alphabet"<<endl;
    else if(isdigit(ch))cout<<"digit"<<endl;
    else cout<<"special character"<<endl;
}


int main()
{
    Ck check;
    check.get_ch();
    check.print();
    return 0;
}

/*
input:
-

output:
special character


*/