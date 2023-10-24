// 14.	Write C++ program to print alphabets from a to z

#include <bits/stdc++.h>
using namespace std;

class Alphabets{
    public:
    void print();
};

void Alphabets::print(){
    for(char ch='a';ch<='z';ch++)cout<<ch<<" ";

}


int main()
{
    Alphabets AL;
    AL.print();
    return 0;
}

/*
input:

output:

a b c d e f g h i j k l m n o p q r s t u v w x y z 

*/