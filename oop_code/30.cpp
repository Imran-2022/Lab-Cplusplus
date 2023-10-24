// 30.	C++ program with Constructor.

#include <bits/stdc++.h>
using namespace std;

class Construct
{
private:
    int x, y;

public:
    Construct(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void print(){cout << x << " " << y << endl;}
};

int main()
{
    Construct ct(10, 20);
    ct.print();
    return 0;
}

/*
output:

10 20

*/