// 13.	C++ program to enter month number and print number of days in month.

#include <bits/stdc++.h>
using namespace std;

class Days_in_month{
    private:
        int month;
        vector<pair<int,int>>vt={{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
    public:
        void get_month(){
            cin>>month;
        }
        void print_days();
};

void Days_in_month::print_days(){
    cout<<vt[month-1].second<<endl;
}

int main()
{
    Days_in_month DM;
    DM.get_month();
    DM.print_days();

    return 0;
}

/*
input:
2

output:
28


*/