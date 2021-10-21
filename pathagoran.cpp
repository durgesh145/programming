#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first number ";
    cin>>a;
    cout<<"Enter secound number ";
    cin>>b;
    cout<<"Enter third number ";
    cin>>c;
    int max=a;
    if(b>=max)
    max=b;
    if(c>=max)
    max=c;
    if (max==a && a*a == b*b + c*c) cout<<"true";
    else if(max == b && b*b == a*a + c*c) cout<<"true";
    else if(max == c && c*c == a*a + b*b) cout<<"true";
    else cout<<"false";
    
return 0;
}
