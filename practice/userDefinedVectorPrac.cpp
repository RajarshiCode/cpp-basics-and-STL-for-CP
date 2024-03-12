#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //user defined vector
    
    int n;
    cout<<"How many values you wanna enter in the vector : "<<endl;
    cin>>n;
    vector<int> v(n);
    
    
    cout<<"Enter the values in the vector : "<<endl;
    for(auto &it : v)
        cin>>it;
    
    // sort(v.begin(),v.end());    // ascending order
    // sort(v.begin(),v.end(), greater<int>()); // descending order

    // reverse(v.begin(),v.end()); // Reverse order

    cout<<"The values inside the vector : "<<endl;
    for(auto it : v)
        cout<<it<<'\t';
    
    
    
    return 0;
}