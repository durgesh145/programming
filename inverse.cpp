#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int inverted = 0;
    int power = 1;
    int i=0;
    int p=1;                           
    while (n > 0) {
    int digit = n % 10;
    n = n / 10;
    i += p*pow(10, digit - 1);
    p++;
    }
    cout<<i<<endl;
    return 0;
}
//     int i = 0;
//     int p = 1;
//     while (n > 0){
//         int dig = n % 10;
//         n = n / 10;
//         i += p * pow(10, dig - 1);
//         p++;
//     }

//     cout << (i) << endl;