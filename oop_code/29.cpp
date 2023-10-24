// 29.	C++ program using Inheritance charateristics.

#include <bits/stdc++.h>
using namespace std;

class GrandParent{
    public:
    void displayGrandParent(){
        cout<<"GrandParent"<<endl;
    }
};

class Parent: public GrandParent{
    public:
    void displayParent(){
        cout<<"Parent"<<endl;
    }
};

class Child : public Parent{
    public:
    void displayChild(){
        cout<<"Child"<<endl;
    }
};

int main()
{
    Child child;
    child.displayGrandParent();
    child.displayParent();
    child.displayChild();

    return 0;
}

/*
output:

GrandParent
Parent
Child


*/