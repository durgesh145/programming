// // // // // #include <bits/stdc++.h>

// // // // // using namespace std;
// // // // // vector<string> vec;
// // // // // void find(string s,int n8,int n9){
// // // // //     if(n8==0 && n9==0){
// // // // //         vec.push_back(s);
// // // // //         cout<<s;
// // // // //         return;
// // // // //     }
// // // // //     if(n8>n9)
// // // // //       return ;
// // // // //     if(n8<=0 && n9<=0)
// // // // //       return;
// // // // //     find(s+'8',n8-1,n9);
// // // // //     find(s+'9',n8,n9-1);
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     string s="";
// // // // //     find(s,4,4);
// // // // //     for(int i=0;i<vec.size();i++){
// // // // //         cout<<vec[i]<<endl;
// // // // //     }

// // // // //     return 0;
// // // // // }


// // // /* this quradinator find program*/
// // // // #include <iostream>
// // // // using namespace std;

// // // // int main() {
// // // //     //Write your code here
// // // //     int x,y;
// // // //     cin>>x>>y;
// // // //     if(x>=0&&y>=0){
// // // //         cout<<"1st Quadrant";
// // // //     }
// // // //        else if(x!=0&&y>=0){
// // // //            cout<<"2nd Quadrant";
// // // //        }
// // // //     else if(x!=0&&y!=0){
// // // //         cout<<"3rd Quadrant";
// // // //     }
// // // //     else if(x>=0&&y!=0){
// // // //         cout<<"4th Quadrant";
// // // //     }
// // // //     else if(x!=0&&y==0){
// // // //         cout<<"x axis";
// // // //     }
// // // //     else if(x==0&&y!=0){
// // // //         cout<<"y axis";
// // // //     }
// // // //     else{
// // // //         cout<<"origin";
// // // //     }
    
// // // //     return 0;
// // // // }

// // // /*this is  for loop with a semicolon is called as body-less for loop. 
// // // It is used only for incrementing the variable values. So in this program,
// // //  the value is incremented and printed as 10.*/


// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // //     int i;
// // //     for (i = 0; i < 10; i++);{
// // //         cout << i;
// // //     }
// // //     return 0;
// // // }
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     //Write your code here
// //     int n;
// //     int sum=0;
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //     if(i%2==0){
// //         sum=sum+i;
// //     }}
// //     cout<<sum;
// //     return 0;
// // }
// /*Fahrenheit to Celsius */
// #include <iostream>
// using namespace std;

// int main() {
//     //Write your code here
//     int s,e,w;
//     cin>>s>>e>>w;
//     for(int i=s; i<=e;i+=w){
//         int C = (i- 32)/ 1.8;
//         cout<<i<<"\t"<<C<<endl;
//     }
//    //f = (9.0*c/5.0)+32;
   
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin>>n;
//   int rev=0;
//   for(int i=n;i!=0;i/=10){
//     int r=i%10;
//     rev=rev*10+r;

//   }
//   if(rev==n)
//   cout<<"YES";
//   else cout<<"NO";
//   return 0;
// }
#include <iostream>

using namespace std;

//Write your totalPrime function here
// int totalPrime(int S,int E){
//   for(int i=S;i<=E;i++){

//   }
// }
   
int main() {
//     int S, E;
//     cin >> S >> E;
//     cout << totalPrime(S, E);
//     return 0;
// }
int n,m=0;
int flog=0;
cin>>n;
 m=n/2;
for(int i=2;i<=m;i++){
if(n%i==0){
cout<<" no prime"<<endl;
flog=1;
break;
}
}
if(flog==0)
cout<<"prime";
return 0; 
}