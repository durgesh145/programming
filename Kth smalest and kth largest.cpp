#include <iostream>
#include<algorithm>

using namespace std;
int fun(int arr[], int n, int k){
    int j=0;
	int i = n-1;
   while(i>=0){
       j++;
       while(i>0 && arr[i] == arr[i-1]){
           i--;
       }
       if(j==k){
           return arr[i];
       }
       i--;
   }
   return -1;
}
void kthSmallestLargest(int arr[], int n, int k) 
{ 
    sort(arr, arr+n);
    int largest = fun(arr, n, k);
    reverse (arr, arr+n);
    int smallest = fun(arr, n, k);
    cout<<largest<<" "<<smallest<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
    }
    return 0;
}