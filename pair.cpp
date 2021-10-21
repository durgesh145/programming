#include<bits/stdc++.h>
using namespace std;
int main(){
// int A[6]={1,2,3,4,5,6};
// int sum=10;
int size;
cout<<"Enter the size of array ";
cin>>size;
cout<<"Enter the elemnt of the array ";
int A[size];
for (int i = 0; i < size; i++)
{
    cin>>A[i];

}
int sum;
cout<<"Enter the sum array ";
cin>>sum;

int c=0;
for (int i = 0; i < size; i++)
{
    for (int j = i+1; j < size; j++)
    {
      if(A[i] +A[j] == sum){
          c++;
          cout<<"pair a given sum "<<sum<<" "<<A[i]<<" "<<A[j]<<" "<<endl;
      }
      else {
          cout<<"not found"<<endl;
      }
    }
    
}



}

