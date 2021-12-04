#include<iostream>
using namespace std;

int main(){
    int n1, n2,n3;
    cin>>n1;
    // int* a1 = new int[n1];
    int a1[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    // int* a2 = new int[n2];
    int a2[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    
    //write your code here
    int m;
    if(n1>n2){
        m=n1;
    }
    else m=n2;
     int a3[m+1];
    int carry=0;
    int i=n1-1,j=n2-1;
    int k=0,min;
    if(n1<n2){
         min=n1;
    }
    else min=n2;

    while(min>0){
      if(carry==0){
          int sum=a1[i]+a2[j];
          if(sum>9){
              int r=sum;
              carry=r/10;
              a3[k++]=sum%10;
          }
          else{
              a3[k++]=sum;
          }
      }
      else{
          int sum=a1[i]+a2[j]+carry;
          if(sum>9){
              int r=sum;
              carry=r/10;
              a3[k++]=sum%10;
          }
          else{
              a3[k++]=sum;
          }
      }
       i--;j--;
      min--;
    }

    // int* a3 = new int[n3];
    for(int l=k-1;l>=0;l--)
       cout<<a3[l];
    return 0;
    
}