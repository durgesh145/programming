// #include <iostream>
// using namespace std;

// void sort012(int arr[], int n) {

//     // Taking two pointer one at begining and other at the end of array.
//     int low = 0;
//     int high = n - 1;
//     int i = 0;

//     while (i <= high) {

//         // if arr[i] is equal to 0
//         if (arr[i] == 0) {
//             int t;
//             t = arr[low];
//             arr[low] = arr[i];
//             arr[i] = t;
//             low++;
//             i++;
//         } else if (arr[i] == 2) {
//             int t;
//             t = arr[high];
//             arr[high] = arr[i];
//             arr[i] = t;
//             high--;
//         }
//         // if arr[i] is not equal to 0 and 2.
//         else
//             i++;

//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t > 0) {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         sort012(arr, n);
//         for (int i = 0; i < n; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//         t--;
//     }
//     return 0;
// }

// sencond mothad

/*Two Pass Algorithm
The solution involves iterating through the original array and counting the number of 0s, 1s, and 2s, and just overwriting the original array in a second pass. The only disadvantage is that we need to traverse the array twice to get a sorted array.
Steps:

Traverse the array once and keep track of the count of 0s, 1s and 2s encountered.
Now traverse the array again and overwrite the array starting from the beginning, first with 0s, then 1s, and finally all 2s.
*/

#include <iostream>
using namespace std;

void sort012(int arr[], int n) {

    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == 0)
            countZero++;

        else if (arr[i] == 1)
            countOne++;

        else if (arr[i] == 2)
            countTwo++;
    }

    int index = 0;

    for (int i = 0; i < countZero; i++) {

        arr[index] = 0;
        index++;
    }

    for (int i = 0; i < countOne; i++) {

        arr[index] = 1;
        index++;
    }

    for (int i = 0; i < countTwo; i++) {

        arr[index] = 2;
        index++;
    }

}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}