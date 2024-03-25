#include<bits/stdc++.h>
using namespace std;


int main()
{
    int ar [] = {2,9,10,11,20};

    cout<<*max_element(ar,ar+(end(ar)-begin(ar))); // here the * will access the location of the iterator.
    return 0;
}