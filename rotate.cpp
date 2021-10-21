#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    cout<<"Enter N number";
    cin>>n;
    cout<<"Enter K number";
    cin>>k;
    int temp = n;   
    int count =0;   
    while (temp>0)
    {
        temp /=10;    
        count ++;   
    }
    int mult =1;
    int div = 1;
    for (int i = 1; i <= count; i++)
    {
        if (i<=k)
        {
            div =div*10; 
        }
        else{
            mult = mult*10; 
        }
        
    }
    int q= n/div;        
    int r= n % div;    
    
    int rot = r * mult + q; 
    cout<<rot;
    return 0;
}