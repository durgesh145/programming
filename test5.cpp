// #include<iostream>
// using namespace std;
// int main ()
// {
//     int i ;
//     cin>>i;
//     if (i<=65&&i<=90)
//     {
//         cout<<1<<endl;

//     }
//     else if (i<=95&&i<=122)
//     {
//         /* code */
//         cout<<0<<endl;
//     }
    
//     else{
//         cout<<-1<<endl;
//     }
//     return 0;

// }
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int basicSalary;
    char grade;
    cin>>basicSalary;
    cin>>grade;
    float hra,da,allow,pf;
    hra=(20*basicSalary)/100; 
    da=(50*basicSalary)/100;
    pf=(11*basicSalary)/100;
    if(grade=='A') allow=1700;
    else if(grade=='B') allow=1500;
    else{
        allow=1300;
    }
    int totalSalary=basicSalary+hra+da+allow-pf;
    cout<<totalSalary;
    

    return 0;
}