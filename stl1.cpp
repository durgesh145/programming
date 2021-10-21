#include<iostream>
#include<array>
using namespace std;

int main (){
    //Declare
    std::array<int, 4>myarray;
    // Initialization
    std::array<int, 4>myarray = {1,2,3,4};//initializer list
    std::array<int, 4>myarray2 {1,2,3,4};//unfrom initialization
    
    //assign using initializer list
    std::array<int,4>myarray;
    myarray={1,2,3,4};
    return 0;
}