#include <bits/stdc++.h>

using namespace std;
vector<string> vec;
void find(string s,int n8,int n9){
    if(n8==0 && n9==0){
        vec.push_back(s);
        cout<<s;
        return;
    }
    if(n8>n9)
      return ;
    if(n8<=0 && n9<=0)
      return;
    find(s+'8',n8-1,n9);
    find(s+'9',n8,n9-1);
}

int main()
{
    string s="";
    find(s,4,4);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }

    return 0;
}
