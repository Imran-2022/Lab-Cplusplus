// 1.	Write C++ program to concatenate two strings 

#include <bits/stdc++.h>
using namespace std;

class ConcatS{
    private:
        string s1,s2;
    public:
        void getString(){
            cin>>s1>>s2;
        }
        void string_concat(){
            s1+=s2;
            cout<<s1<<endl;
        }
};

int main()
{
    ConcatS string_concat;
    string_concat.getString();
    string_concat.string_concat();
    
    return 0;
}

/*

input:
abc
def

output:
abcdef

*/