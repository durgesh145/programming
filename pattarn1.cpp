// // #include<iostream>
// // using namespace std;
// // int main(){

// // int n;
// // cout<<"Enter the star =";
// // cin>>n;

// //     for(int i=1;i<=n;i++){
// //         // for (int k = 1;k<=n-i; k++)
// //         // {
// //         //     cout<<"\t";
// //         // }

// //     for(int j=1;j<=n;j++){
        
// //         if((i==1 || j==1) || (i==n || j==n)){
// //             cout<<"*\t";
// //         }
// //         else{
// //             cout<<"\t";
// //         }
// //         }
// //         cout<<endl;
// //     }
    
    
 


// //     return 0;
// // }
//  /*    * pattern

//                         *
//                 *
//         *
// *
// */
// #include <iostream>
// using namespace std;

// int main(int argc, char **argv)
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= n; j++){
//             if (i==j||i + j == n + 1){
//                 cout << ("*\t");
//             }else{
//                 cout << ("\t");
//             }
//         }
//         cout << endl;
//     }
//     return 0;
}
// #include <iostream>
// using namespace std;

// int main(int argc, char **argv)
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//      for (int j = 0; j <n; j++)
//      { if(i+j==){
//          cout<<("*\t");
//      }
//       cout<<("\t");
//      }
//       cout<<endl;
//      }
//     return 0;
// }
#include<bitset>

int main(int argc, char **argv){
    int n;
    cin >> n;

    int nos = n / 2;
    int nis = -1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= nos; j++){
            cout << ("\t");
        }
        cout << ("*\t");
        for (int j = 1; j <= nis; j++){
            cout << ("\t");
        }
        if (i > 1 && i < n){
            cout << ("*\t");
        }

        cout << endl;

        if (i <= n / 2){
            nos--;
            nis += 2;
        }else{
            nos++;
            nis -= 2;
        }
    }
    return 0;
}
      