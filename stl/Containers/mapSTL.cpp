#include<bits/stdc++.h>
using namespace std;
/*
    Map in c++ stl stores in a mapped fashion, also the key values are unique, mapped with a value or a pair/vector
    It stores unique keys in sorted order.


    AID:
        https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/



*/

int main()
{
    map<int,int> mp;
    mp[1]=2;
    mp[5]=9;
    mp[4]=8;
    mp[7]=6;
    mp[2]=1;
    


    cout<<"Map 1: "<<endl;
    for(auto i : mp)
        cout<<i.first<<" <-> "<<i.second<<endl;

    map<int,vector<int>> mp2;
    mp2[1] = {1,2,3,4};    
    
    mp2[10] = {10,20,30,40};  
    cout<<"Map 2: "<<endl;
    for(auto i : mp2)
    {
        cout<<i.first<<" <-> ";
        for(auto i : i.second)
            cout<<i<<' ';
        cout<<endl;    
    }    
    cout<<"lower Bound:"<<endl;

    auto it = mp.lower_bound(3);
    cout<<(*it).second<<endl;
    cout<<"Upper Bound:"<<endl;
    auto it1 = mp.upper_bound(3);
    cout<<(*it1).second;
    cout<<endl;
    return 0;
}