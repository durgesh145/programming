#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    // int k=n;
    while (n>=10)
    {
        n/=10;
        i*=10;
    }
    // k=n;
    while (i!=0)
    {
        int j=n/i;
        cout<<j<<endl;
        n%=i;
        i/=10;
    }
   return 0; 
    
}
    // int power = 1;
    // int temp = n;
    // while (temp >= 10){
    //     temp /= 10;
    //     power *= 10;
    // }

    // temp = n;
    // while (power != 0){
    //     int digit = temp / power;
    //     cout << (digit) << endl;

    //     temp = temp % power;
    //     power = power / 10;
    // }