#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter prime factrorization";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        while (n%i==0)
        {
            n/=i;
            cout<<i<<" ";
            
        }
        
    }
    if (n!=1)
    {
        cout<<n;
    }
    
    
    
} // namespace std;
