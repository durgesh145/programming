// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, count = 0, count1 = 0, l = 0;

//     cout << "Enter number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; ++i)
//     {
//         for(int space = 1; space <= n-i; ++space)
//         {
//             cout << "  ";
//             ++count;
//         }
//         while(l != 2*i-1)
//         {
//             if (count <= n-1)
//             {
//                 cout << i+l << " ";
//                 ++count;
//             }
//             else
//             {
//                 ++count1;
//                 cout << i+l-2*count1 << " ";
//             }
//             ++l;
//         }
//         count1 = count = l = 0;

//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
int n, s, x, y;
cout << "Enter number of rows to show star pattern: ";
cin >> n;
for(x = 1; x <= n; x++)
{
for(s = x; s < n; s++)
cout << " ";
//for loop for displaying star
for(y = 1; y <= x; y++)
cout << "* ";
cout << "\n";
}
return 0;
}