#include<bits/stdc++.h>
using namespace std;
/*


    In Unordered Set each element will be unique, but it won't stay in a sorted orde
    lower_bound and upper_bound does not work here, 
    every operation occurs in O(1).





    AID:
        https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/




    

*/

int main()
{
    unordered_set<int> us;
    us.insert(2);
    us.insert(2);
    us.insert(1);
    us.insert(2);
    us.insert(1);
    us.insert(3);
    us.insert(3);
    
    for(auto i : us)
        cout<<i<<'\t';

    cout<<endl;
    cout<<"Bucket Size: "<<us.bucket_size(2); // no. of two present.
    us.reserve(2);    
    cout<<endl;
    for(auto i : us)
        cout<<i<<'\t';
    return 0;
}