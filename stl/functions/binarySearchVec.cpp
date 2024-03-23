#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int> v = {8,10,12,23,6,0,-1,5};
    sort(v.begin(),v.end());
    
    cout<<binary_search(v.begin(),v.end(),-1);
    return 0;
}