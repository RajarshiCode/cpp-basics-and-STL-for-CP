#include<bits/stdc++.h>
using namespace std;

int main(){
    
    cout<<"Sort a vector........................................."<<endl;
   vector<int> v;
   v = {0,-1,3,6,9,8,4,5,6};
   for(auto it : v)
        cout<<it<<'\t';
    sort(v.begin(),v.end(), greater<int>());
    cout<<endl;
   for(auto it : v)
        cout<<it<<'\t';
    return 0;
}