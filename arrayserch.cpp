#include <iostream>
using namespace std;
int main() {
    //Write your code here
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
     int a;
    cin>>a;
    int elemt=a;
    int i = 0;
    int index=-1;
    while (i < n)
    {
        if (arr[i] == elemt) {
            index=i;
            break;
        }
        i++;
    }
    cout<<index;
   
    return 0;
}