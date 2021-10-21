#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f1=0;
    int f2=1;
    for (int i = 0; i < n; i++)
    {
        cout<<f1<<endl;
        int f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    return 0;
    
}