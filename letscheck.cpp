#include<iostream>
using namespace std;
int main()
{
    int low,high;
    cin>>low>>high;
    //  cout<<"Enter low number ";
    // cin>>low;
    // cout<<"Enter high number ";
    // cin>>high;
    for(int i=low;i<=high;i++){
        // cout<<i<<endl;
        bool isprime=true;
        for (int count = 2; count < i; count++)
        {
            if (i%count ==0)
            {
                isprime=false;
                break;
            }
            
        }
        if (isprime){
            cout<<i<<endl;
        }
    }
   

    return 0;
}