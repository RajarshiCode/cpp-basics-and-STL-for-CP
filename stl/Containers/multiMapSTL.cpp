#include<bits/stdc++.h>
using namespace std;
/*
    everything similar to map, but the only difference is it can store duplicate keys too, but they are stored in a sorted order.   


    AID:
        https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/


*/

int main()
{
    multimap<int,int> mmp;
    mmp.emplace(1,3);
    mmp.emplace(1,3);
    mmp.emplace(2,33);
    mmp.emplace(4,38);

    for(auto i : mmp)
        cout<<i.first<<'\t'<<i.second<<endl;
    







    cout<<endl;
    return 0;
}