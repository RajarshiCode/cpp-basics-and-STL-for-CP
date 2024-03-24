#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms = {1,2,1,3,2,10,1,5,4,8,9};
    cout<<"the set:"<<endl;
    for(auto i : ms)
        cout<<i<<'\t';
    cout<<endl;
    
    cout<<"No. of 1's = "<<ms.count(1)<<endl;
    cout<<"the set after manipulation:"<<endl;
    ms.erase(ms.find(1),next(ms.find(1),2));
    
    for(auto i : ms)
        cout<<i<<'\t';
    cout<<endl;
    cout<<endl;
    return 0;
}