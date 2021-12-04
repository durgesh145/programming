// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // void rotate(vector<vector<int> >& matrix);

// // // void rotate(vector<vector<int> >& matrix)
// // // {
// // //     // Your code goes here
// // //       int n=matrix.size();
// // //     int m=matrix[0].size();
// // //     for(int i=0;i<n;i++){
// // //         for(int j=0;j<=i;j++){
// // //             int temp=matrix[i][j];
// // //             matrix[i][j]=matrix[j][i];
// // //             matrix[j][i]=temp;
// // //         }
// // //     }
// // //     for(int i=0;i<(n/2);i++)
// // //     {
// // //         for(int j=0;j<m;j++){
// // //             int temp=matrix[i][j];
// // //             matrix[i][j]=matrix[n-i-1][j];
// // //             matrix[n-i-1][j]=temp;
// // //         }
// // //     }
// // // }



// // // #include <stdio.h>
// // // #include <stdlib.h>
// // // int main()
// // // {
// // //     int a[3][3]={1,2,3,4,5,6,7,8,9};
// // //     int i,j;
// // //     printf("Original Array\n");
// // //     for(i=0;i<3;i++)
// // //     {
// // //         for(j=0;j<3;j++)
// // //         {
// // //             printf("%d ",a[i][j]);
// // //         }
// // //         printf("\n");
// // //     }
// // //     printf("Rotate Matrix by 90 degrees\n");
// // //     for(i=2;i>=0;i--)
// // //     {
// // //         for(j=0;j<=2;j++)
// // //         {
// // //             printf("%d ",a[j][i]);
// // //         }
// // //         printf("\n");
// // //     }
// // //     return 0;
// // // }


// // // #include <stdio.h>
// // // #include <stdlib.h>
// // // int main()
// // // {
// // //     int a[3][3]={1,2,3,4,5,6,7,8,9};
// // //     int i,j;
// // //     printf("Original Array\n");
// // //     for(i=0;i<3;i++)
// // //     {
// // //         for(j=0;j<3;j++)
// // //         {
// // //             printf("%d ",a[i][j]);
// // //         }
// // //         printf("\n");
// // //     }
// // //     printf("Rotate Matrix by 90 degrees\n");
// // //     for(i=0;i<3;i++)
// // //     {
// // //         for(j=2;j>=0;j--)
// // //         {
// // //             printf("%d ",a[j][i]);
// // //         }
// // //         printf("\n");
// // //     }
// // //     return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int rows;

// // //     cout << "Enter number of rows: ";
// // //     cin >> rows;

// // //     for(int i = rows; i >= 1; --i)
// // //     {
// // //         for(int space = 0; space < rows-i; ++space)
// // //             cout << "  ";

// // //         for(int j = i; j <= 2*i-1; ++j)
// // //             cout << "* ";

// // //         for(int j = 0; j < i-1; ++j)
// // //             cout << "* ";

// // //         cout << endl;
// // //     }

// // //     return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int height;
// // //     cout << "Enter the height of the pyramid : " << endl;
// // //     cin >> height;

// // //     for (int i = 0; i < height; i++)
// // //     {
// // //         for (int j = 0; j < i; j++)
// // //         {
// // //             cout << " ";
// // //         }
// // //         for (int j = 0; j < height - i; j++)
// // //         {
// // //             cout << "* ";
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main() {
// // // 	int row,col;
// // // 	cin>>row>>col;
// // // 	int arr[row][col];
// // // 	for(int i=0;i<row;row++){
// // // 		for(int j=0;j<col;col++){
// // // 			cin>>arr[i][j];
// // // 		}
// // // 	}    
// // // 	map<int,vector<int>> m;
// // // 	for(int i=0;i<row;i++){
// // // 		for(int j=0;j<col;j++){
// // // 			m[i+j].push_back(arr[i][j]);
// // // 		}
// // // 	}      
// // // 	map<int,vector<int>>:: iterator it = m.begin();
// // // 	while(it!=m.end()){
// // // 		if(it->first%2==0)
// // // 		reverse(it->second.begin(),it->second.end());
// // // 		for(int i=0;i<it->second.size();++i){
// // // 			cout<<it->second[i]<<" ";
// // // 		} 
// // // 		it++;
// // // 	}                
// // // 	return 0;
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main() {
// // 	int row,col;
// // 	cin>>row>>col;
// // 	int arr[row][col];
// // 	for(int i=0;i<row;i++){
// // 		for(int j=0;j<col;j++){
// // 			cin>>arr[i][j];
// // 		}
// // 	}
// // 	map<int,vector<int>> m;
// // 	for(int i=0;i<row;i++){
// // 		for(int j=0;j<col;j++){
// // 			m[i+j].push_back(arr[i][j]);
// // 		}
// // 	}
// // 	map<int,vector<int>>:: iterator it=m.begin();
// // 	while(it!=m.end()){
// // 		if(it->first%2==0)
// // 			reverse(it->second.begin(),it->second.end());
// // 		for(int i=0;i<it->second.size();++i){
// // 			cout<<it->second[i]<<" ";
// // 		}
// // 		it++;
// // 	}

// // 	return 0;
// // }




// #include <iostream>
// #include <vector>
// using namespace std;

// void printMatrixDiagonally(vector<vector<int>> const &mat)
// {
// 	// base case
// 	if (mat.size() == 0) {
// 		return;
// 	}

// 	// `M × N` matrix
// 	int M = mat.size();
// 	int N = mat[0].size();

// 	// print `/` diagonal for the upper-left half of the matrix.
// 	for (int r = 0; r < M; r++)
// 	{
// 		// start from each cell of the first column
// 		for (int i = r, j = 0; j < N && i >= 0; i--, j++) {
// 			cout << mat[i][j] << " ";
// 		}
// 		cout << endl;
// 	}

// 	// print `/` diagonal for the lower-right half of the matrix
// 	for (int c = 1; c < N; c++)
// 	{
// 		// start from each cell of the last row
// 		for (int i = M - 1, j = c; j < N && i >= 0; i--, j++) {
// 			cout << mat[i][j] << " ";
// 		}
// 		cout << endl;
// 	}
// }

// int main()
// {
// 	vector<vector<int>> mat =
// 	{
// 		{ 1, 2, 3, 4, 5 },
// 		{ 2, 3, 4, 5, 6 },
// 		{ 3, 4, 5, 6, 7 },
// 		{ 4, 5, 6, 7, 8 },
// 		{ 5, 6, 7, 8, 9 }
// 	};

// 	printMatrixDiagonally(mat);

// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+n);
    int a3[n];
    int k=0;
    for(int i=0,j=0;i<n&&j<n;){
        if(arr[i]==arr1[j]){
            a3[k++]=arr[i];
            a3[k++]=arr1[j];
            i++;j++;
        }
        else if(arr[i]>arr1[j]){
            j++;
        }
        else i++;
    }
    for(int i=0;i<k;i++){
        cout<<a3[i]<<" ";
    }
    
    return 0;
}