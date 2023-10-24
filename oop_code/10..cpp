// 10.	C++ program to print day name of week.

#include <bits/stdc++.h>
using namespace std;

class Day_of_week{
    private:
        int n;
        string s[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    public:
        void get_day(){
            cin>>n;
        }
        void print_day();
};

void Day_of_week::print_day(){
    cout<<s[n-1]<<endl;
}


int main()
{
    Day_of_week Dw;
    Dw.get_day();
    Dw.print_day();
    return 0;
}

/*
input:
2

output:
Monday


*/