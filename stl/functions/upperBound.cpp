#include<bits/stdc++.h>
using namespace std;
/*
    supply a sorted array.
    upper_bound() return an iterator 

    upper_bound(first_iterator, end_iterator, element) - first_iterator will return the index to the next greater element always.

    AID:-
        https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/

    Time Complexity :
    log(n)


*/

int main()
{
    int ar[]={1,4,5,6,9,9}; 

    cout<<upper_bound(ar,ar+6,7)-ar<<endl; // pointing to 3, because 6 is present in 3 position.
    cout<<upper_bound(ar,ar+6,4)-ar<<endl;





    cout<<endl;
    return 0;
}