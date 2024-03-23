#include<bits/stdc++.h>
using namespace std;
/*
    supply a sorted array.
    lower_bound() return an iterator 

    lower_bound(first_iterator, end_iterator, element) - first_iterator will return the index

    AID:-
        https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/

    Time Complexity :
    log(n)


*/

int main()
{
    int ar[]={1,4,5,6,9,9}; 
    
    cout<<lower_bound(ar,ar+6,4) - ar<<endl; // will return 1(index), because it is in the 1th index


    cout<<lower_bound(ar,ar+6,7) -ar<<endl; // will return 4(index), because 7 isn't pressent in the array. So it will point the iterator to next greater element present in the array ie, 9 which is present in the 4th poistion 



    cout<<lower_bound(ar,ar+6,10) -ar<<endl; // will return 6(after the last index), because 10 isn't present in the array and there is no greater element available in the array compared to 10, so it will point to the index after the last index. 

    //if having multiple occurence of an element in the array, it will return the iterator to its first occurence of it.

    int a[] ={0,1,2,3,4,5,5,5,5,6};
    cout<<lower_bound(a,a+10,5)-a<<endl;
    cout<<endl;
    return 0;
}