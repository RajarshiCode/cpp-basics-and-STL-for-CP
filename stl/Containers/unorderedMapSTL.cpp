#include<bits/stdc++.h>
using namespace std;
/*
    unique but not in a sorted order.
    AID:
        https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/




*/

int main()
{
    unordered_map<int,int> umap;    
    umap.emplace(50,2);
    umap.emplace(5,2);
    umap.emplace(1,2);
    umap.emplace(3,2);
    umap.emplace(1,2);
    umap.emplace(4,2);
    umap.emplace(1,2);
    for(auto i : umap)
        cout<<i.first<<'\t'<<i.second<<endl;
    
    cout<<endl;
    return 0;
}