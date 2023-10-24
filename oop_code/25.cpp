// 25.	C++ Program to Calculate Area of Circle.


#include <bits/stdc++.h>
using namespace std;

class AreaOfCircle{
    private:
        double r;
    public:
        void get_val(){
            cin>>r;
        }
        void print();
};
void AreaOfCircle::print(){
    cout<<"area of circle : "<<3.1416*(pow(r,2))<<endl;
}

int main()
{
    AreaOfCircle AC;
    AC.get_val();
    AC.print();
    return 0;
}

/*
input:
5

output:
area of circle : 78.54


*/