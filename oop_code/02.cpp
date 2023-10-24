// 2.	Write C++ program to find string length

#include <bits/stdc++.h>
using namespace std;

class String_len{
    private:
        string s;
    public:
        void get_string(){
            getline(cin,s);
        }
        void sz();
};

void String_len::sz() {
    cout<<s.size()<<endl;
}


int main()
{
    String_len st;
    st.get_string();
    st.sz();
    return 0;
}

/*

input: 
this is an apple

output:
16

*/