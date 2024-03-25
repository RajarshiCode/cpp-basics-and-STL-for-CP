#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n = 5;
    int count = __builtin_popcount(n); // counts the no. of 1 present.
    cout<<count<<endl;

    long long x = 213215465465;
    cout<< __builtin_popcountll(x);
    
    return 0;
}