#include<bits/stdc++.h>
using namespace std;
// // namespace durgesh{
// //     int val=50;
// //     int getval(){
// //         return val*10;
//     }
// }


struct Node
{
    string str;
    int num;
    double doub;
    char x;

    Node(string str_, int num_, double doub_, char x_){
        str=str_;
        num=num_;
        doub =doub_;
        x=x_;
    }
};

int main (){

// int val=50;
double val=60.00;
// cout<<durgesh::getval()<<" "<<val<<endl;
cout<<val<<endl;

// int
// double
// char


//create a data type where are you store
// {string,int,double,char}


// node dugu;
// dugu.str="durgesh";
// dugu.num=16;
// dugu.doub=16.0;
 Node *dugu = new Node("durgesh",16,16.0,' ');
}