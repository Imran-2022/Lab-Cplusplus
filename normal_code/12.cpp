// 12.	C++ program to calculate the total marks, percentage and division of student.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vt(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>vt[i];
        sum+=vt[i];
    }
    cout<<"total marks : "<<sum<<endl;
    cout<<"percentage : "<<sum/n<<endl;

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