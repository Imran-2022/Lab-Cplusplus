// 12.	C++ program to calculate the total marks, percentage and division of student.

#include <bits/stdc++.h>
using namespace std;

class M_P_D{
    private:
        int n;
        int sum;
        vector<int>vt;
    public:
        M_P_D(int n) : n(n), vt(n), sum(0) {}
        void get_val(){
            for(int i=0;i<n;i++){
                    cin>>vt[i];
                    sum+=vt[i];
                }
        }
        void get_total_marks(){
            cout<<"Total marks : "<<sum<<endl;
        }
        void get_percentage(){
            cout<<"percentage : "<<sum*1.0/n<<endl;
        }

        void get_division();

};

void M_P_D::get_division(){
    sort(vt.begin(),vt.end());
    cout<<"division : ";
    if(vt[0]<33){
        cout<<"F-He failed in some subjects"<<endl;
        return;
    }
    if(sum/n>90)cout<<"A+"<<endl;
    else if(sum/n>80)cout<<"A"<<endl;
    else if(sum/n>70)cout<<"A-"<<endl;
    else if(sum/n>60)cout<<"B+"<<endl;
    else if (sum/n>50)cout<<"B"<<endl;
    else if(sum/n>40)cout<<"B-"<<endl;
    else cout<<"C"<<endl;
}


int main()
{
    int n;
    cin>>n;
    M_P_D student(n);
    student.get_val();
    student.get_total_marks();
    student.get_percentage();
    student.get_division();
    return 0;
}

/*
input:
4
10 10 10 60

output:

Total marks : 90
percentage : 22.5
division : C



*/